
# Mac

\| 日本語 \| [English](README.md) \| 

![](https://img.shields.io/badge/License-GPLv3-green)

Mac はC言語のプリプロセッサで「計算・分岐・ループ制御」ができるマクロを提供するライブラリです。
これらのマクロは `#define add(a, b) a + b` のような単純な展開ではなく、実際に計算されているかのように計算結果を展開します。
これによって幾つかの計算をプリプロセス段階で済ませることができます。

```c
MAC_ADD(1, 2); // expand as 3!
```

現代のコンパイラは、適切なコードであればそれらの計算を事前に済ませてくれるでしょう。
そのため、このライブラリを最適化用途に使うのはお勧めできません。
また、このライブラリが提供するマクロは展開時に多くのメモリを要求します。
それにより、複雑に入り組んだ式などを展開しようとすれば、メモリ不足によってコンパイルが失敗する可能性があります。
どうしても複雑な式を展開したい場合にはコンピュータのスワップ領域を拡張するなり、何かしらの工夫が必要になるでしょう。

## Usage

ビルド後に作成されるヘッダファイル mac.h をインクルードすることによって、
このライブラリが提供するマクロを使用することができます。
以下にこのライブラリを使用した簡単な例を紹介します。

0 から 6 までのフィボナッチ数を計算して画面に出力する例です。

```c
#include <mac.h>
#include <stdio.h>

#define FIBOITER(n1, n2, i, n) MAC_LESSER(i, n), MAC_IF(MAC_LESSER(i, n), MAC_ADD(n1, n2), n1), n1, MAC_INC(i), n
#define FIBO(n) MAC_WHILE(FIBOITER, 0, 1, 0, n)

int main (){
  printf("%d\n", FIBO(0)); // 0 
  printf("%d\n", FIBO(1)); // 1
  printf("%d\n", FIBO(2)); // 1
  printf("%d\n", FIBO(3)); // 2
  printf("%d\n", FIBO(4)); // 3
  printf("%d\n", FIBO(5)); // 5
  printf("%d\n", FIBO(6)); // 8
  return 0;
}
```

100 までの数を数え上げ、その数が 3 の倍数であれば Fizz、5 の倍数であれば Buzz、
両方の倍数であれば FizzBuzz を画面に出力する例です。

```c
#include <mac.h>
#include <stdio.h>

#define NUMTOSTR(n) NUMTOSTRIN(n)
#define NUMTOSTRIN(n) #n 
#define FIZZBUZZITER(acc, i)\
acc \
MAC_IF(MAC_GREATER(i, 1), ", ", "") \
MAC_IF(\
  MAC_AND(\
    MAC_EQUAL(0, MAC_MOD(i, 3)),\
    MAC_EQUAL(0, MAC_MOD(i, 5))),\
  "Fizz Buzz",\
  MAC_IF(\
    MAC_EQUAL(0, MAC_MOD(i, 3)),\
    "Fizz",\
    MAC_IF(\
      MAC_EQUAL(0, MAC_MOD(i, 5)),\
      "Buzz",\
      NUMTOSTR(i)\
    ))),\
MAC_INC(i)
#define FIZZBUZZ(n) MAC_DOTIMES(n, FIZZBUZZITER, "", 1)

int main (){
  printf("%s\n", FIZZBUZZ(100));
  return 0;
}
```

## API Documentation

### Number Literal

このライブラリは正の整数のみを取り扱います。
そして、このライブラリが提供するマクロはすべて「10進数・16進数・2進数」表記に対応しています。
ただし数値の前に 0 を加えることは許されません。ご注意ください。
もしそのような表記をしてしまった場合にマクロの展開結果がどのようになるかは未定義です。

```c
MAC_BOOL(0); // 0
MAC_BOOL(0xff); // same as 255.
MAC_BOOL(0b11111111); // same as 255.
```

### MAC_BOOL

```c
#define MAC_BOOL(n) /* ... */
```

このマクロはひとつの数値を受け取り、
その整数が 0 であれば 0 を、それ以外の場合には 1 を返します。

### MAC_INC, MAC_DEC

```c
#define MAC_INC(n) /* n + 1 */
#define MAC_DEC(n) /* n - 1 */
```

これらのマクロは与えられた数値を 1 減少あるいは増加させた値を展開します。

MAC_INC マクロはひとつの整数を受け取り、その整数に 1 を足した数値を展開します。
もし引数が上限値に達していた場合、このマクロは上限値を返します。
デフォルトの上限値は 255 です。

MAC_DEC マクロはひとつの整数を受け取り、その整数から 1 を引いた数値を展開します。
もし引数が 0 だった場合、このマクロは 0 を返します。

### MAC_ADD, MAC_SUB, MAC_MUL, MAC_DIV, MAC_MOD

```c
#define MAC_ADD(a, b) /* a + b */
#define MAC_SUB(a, b) /* a - b */
#define MAC_MUL(a, b) /* a * b */
#define MAC_DIV(a, b) /* a / b */
#define MAC_MOD(a, b) /* a % b */
```

これらのマクロは算術演算を行い、演算結果を展開します。

MAC_ADD マクロはふたつの整数を受け取り、その整数同士を加算した数値を展開します。
加算結果が上限値に超過してしまった場合、このマクロは上限値を返します。
デフォルトの上限値は 255 です。

MAC_SUB マクロはふたつの整数を受け取り、その整数同士を減算した数値を展開します。
減算結果が 0 未満の場合、このマクロは 0 を返します。

MAC_MUL マクロは被乗数と乗数を受け取り、それらの整数を乗算した数値を展開します。
乗算結果が上限値に超過してしまった場合、このマクロは上限値を返します。
デフォルトの上限値は 255 です。

MAC_DIV マクロは被除数と除数を受け取り、それらの整数を除算した商を展開します。
除数に 0 が与えられた場合、展開される値は未定義です。

MAC_MOD マクロは被除数と除数を受け取り、それらの整数を除算した余剰を展開します。
除数に 0 が与えられた場合、展開される値は未定義です。

### MAC_LOGNOT, MAC_LOGAND, MAC_LOGOR

```c
#define MAC_LOGNOT(n)    /* ~n */
#define MAC_LOGAND(a, b) /* a & b */
#define MAC_LOGOR(a, b)  /* a | b */
```

これらのマクロはビット演算を行い、演算結果を展開します。
これらのマクロによる演算結果はビルド時に指定されたビット数に応じて変化します。
デフォルトでは 8 ビットです。

MAC_LOGNOT マクロはひとつの整数を受け取り、その整数の各ビットを論理否定した結果を展開します。

MAC_LOGAND マクロはふたつの整数を受け取り、その整数の各ビット同士の論理積を展開します。

MAC_LOGOR マクロはふたつの整数を受け取り、その整数の各ビット同士の論理和を展開します。

### MAC_LSHIFT, MAC_RSHIFT

```c
#define MAC_LSHIFT(n, seekwidth) /* n << seekwidth */
#define MAC_RSHIFT(n, seekwidth) /* n >> seekwidth */
```

これらのマクロは論理シフト演算を行い、演算結果を展開します。
これらのマクロによる演算結果はビルド時に指定されたビット数に応じて変化します。 
デフォルトでは 8 ビットです。

MAC_LSHIFT マクロはひとつの整数とシフト幅を受け取り、
左向きに論理シフト演算を行い、その演算結果を展開します。
演算結果が上限値を超過していた場合、このマクロは上限値を返します。
デフォルトの上限値は 255 です。

MAC_RSHIFT マクロはひとつの整数とシフト幅を受け取り、
右向きに論理シフト演算を行い、その演算結果を展開します。
演算結果が 0 未満の場合、このマクロは 0 を返します。

### MAC_NOT, MAC_AND, MAC_OR

```c
#define MAC_NOT(n)    /* !n */
#define MAC_AND(a, b) /* a && b */
#define MAC_OR(a, b)  /* a || b */
```

これらのマクロは論理演算を行い、その演算結果を展開します。

MAC_NOT マクロは与えられた整数の真偽値を反転します。

MAC_AND マクロはふたつの整数を受け取り、両方の値が真であれば、真が展開されます。

MAC_OR マクロはふたつの整数を受け取り、どちらか片方でも真であれば、真が展開されます。

### MAC_EQUAL, MAC_UNEQUAL, MAC_LESSER, MAC_LESSER_OR_EQUAL, MAC_GREATER, MAC_GREATER_OR_EQUAL 

```c
#define MAC_EQUAL(a, b)            /* a == b */
#define MAC_UNEQUAL(a, b)          /* a != b */
#define MAC_LESSER(a, b)           /* a <  b */
#define MAC_LESSER_OR_EQUAL(a, b)  /* a <= b */
#define MAC_GREATER(a, b)          /* a >  b */
#define MAC_GREATER_OR_EQUAL(a, b) /* a >= b */
```

これらのマクロはふたつの整数を比較します。

MAC_EQUAL マクロはふたつの整数を受け取り、
それらが等しい場合に 1 を、それ以外の場合には 0 を展開します。

MAC_UNEQUAL マクロはふたつの整数を受け取り、
それらが等しくない場合に 1 を、それ以外の場合には 0 を展開します。

MAC_LESSER マクロはふたつの整数を受け取り、
第１引数が第２引数よりも小さければ 1 を、それ以外の場合には 0 を展開します。

MAC_LESSER_OR_EQUAL マクロはふたつの整数を受け取り、
第１引数が第２引数よりも小さいあるいは等しければ 1 を、それ以外の場合には 0 を展開します。

MAC_GREATER マクロはふたつの整数を受け取り、
第１引数が第２引数よりも大きければ 1 を、それ以外の場合には 0 を展開します。

MAC_GREATER_OR_EQUAL マクロはふたつの整数を受け取り、
第１引数が第２引数よりも大きいあるいは等しければ 1 を、それ以外の場合には 0 を展開します。

### MAC_WHILE 

```c
#define MAC_WHILE(func, acc, ...) /* ... */
#define doanything(acc, ...) /* cond, newacc, ... */
```

このマクロは関数形式のマクロとループ結果の初期値、そして任意の数の引数を受け取り、条件を満たすまでの間、第１引数のマクロを繰り返し実行します。
第１引数のマクロは引数に MAC_WHILE マクロの第２引数以降を受け取り、
ループ条件の判定結果と、引数分の新しい値をカンマ区切りで返す必要があります。

このマクロは無限ループに対応していません。
そのためループ数が上限に達した場合にはループを中断し、最後のループ結果を返します。
ループ数の上限はビルド時に与えられたビット数で表現できる最大数です。

下記の例では指定された回数分だけ与えられた文字列を繰り返すマクロ REPEAT を定義しています。

```c
#define REPEATITER(acc, repeatstr, i, n) MAC_UNEQUAL(i, count), acc repeatstr, repeatstr, MAC_INC(i), count
#define REPEAT(count, repeatstr) MAC_WHILE(REPEATITER, "", repeatstr, 0, count)

REPEAT(3, "Repeating!") // expand as "Repeating!" "Repeating!" "Repeating!".
```

### MAC_UNTIL 

```c
#define MAC_UNTIL(func, acc, ...) /* ... */
#define doanything(acc, ...) /* cond, newacc, ... */
```

このマクロは関数形式のマクロとループ結果の初期値、そして任意の数の引数を受け取り、条件が満たされない間、第１引数のマクロを繰り返し実行します。
第１引数のマクロは引数に MAC_UNTIL マクロの第２引数以降を受け取り、
ループ条件の判定結果と、引数分の新しい値をカンマ区切りで返す必要があります。

このマクロは無限ループに対応していません。
そのためループ数が上限に達した場合にはループを中断し、最後のループ結果を返します。
ループ数の上限はビルド時に与えられたビット数で表現できる最大数です。

下記の例では指定された回数分だけ与えられた文字列を繰り返すマクロ REPEAT を定義しています。

```c
#define REPEATITER(acc, repeatstr, i, n) MAC_EQUAL(i, count), acc repeatstr, repeatstr, MAC_INC(i), count
#define REPEAT(count, repeatstr) MAC_UNTIL(REPEATITER, "", repeatstr, 0, count)

REPEAT(3, "Repeating!") // expand as "Repeating!" "Repeating!" "Repeating!".
```

### MAC_DOTIMES

```c
#define MAC_DOTIMES(n, func, acc, ...) /* ... */
#define doanything(acc, ...) /* newacc, ... */
```

このマクロは繰り返し回数、関数形式のマクロとループ結果の初期値、そして任意の数の引数を受け取り、指定された回数分、第２引数のマクロを繰り返し実行します。
第２引数のマクロは引数に MAC_DOTIMES マクロの第３引数以降を受け取り、引数分の新しい値をカンマ区切りで返す必要があります。

下記の例では指定された回数分だけ与えられた文字列を繰り返すマクロ REPEAT を定義しています。

```c
#define REPEATITER(acc, repeatstr) acc repeatstr, repeatstr 
#define REPEAT(count, repeatstr) MAC_DOTIMES(count, REPEATITER, "", repeatstr)

REPEAT(3, "Repeating!") // expand as "Repeating!" "Repeating!" "Repeating!".
```

## Installation

Mac はビルド用に makefile を同梱しています。
そのため下記のコマンドからビルドをすることができます。
ビルドが成功した場合、dist ディレクトリに mac.h ファイルが作成されます。

```shell
$ make 
```

ビルドする際に bits オプションを使用することで、
Mac が取り扱う整数のビット幅を変更することができます。
このオプションを利用しない場合、makefile は既定の値 8 を使用します。

```shell
$ make bits=8
```

Mac は簡単なテストコードを同梱しています。
そのため下記のコマンドからテストを実行することができます。
このテストコードは 8 ビット用に書かれているため、
Mac を他ビット幅用にビルドした場合に正常に動作しないかもしれません。
ご注意ください。

```shell
$ make test
```

## License 

Mac は [GNU General Public License version3](LICENSE) の許諾の下で公開されています。
