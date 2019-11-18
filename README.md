
# Mac

\| [日本語](README.ja.md) \| English \| 

![](https://img.shields.io/badge/License-GPLv3-green)

Mac is a library for C language that provide some macros for calculating, conditional branch and looping.
those macro expand calculation result, so you can finish calculation of some codes when preprocessing with this library.

```c
MAC_ADD(1, 2); // expand as 3!
```

but, many modern compiler can optimize suitable codes, so I dont recommend to use this library for optimization.
and those macros require many memory resources, so you may not be able to expand complicated codes with compiler.
if you really want to expand complicated code, you should extend swap memory or etc yourself.

## Usage

you can use macros provided by library by include a header file of mac.h that created after build.
I show two example codes on here.

this example calculate fibonacci numbers until 0th to 6th and print.

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

this example, count up numbers until 0th to 100th.
if number can divide by 3, print "Fizz", 
if number can divide by 5, print "Buzz", 
if number can divide by both, print "Fizz Buzz", 
otherwise, print number.

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

this library has supported positive integer.
and, this library macros has supported hexadecimal, binary and decimal notation. 
but, it is not allowed to add 0 before the number. 
if you added 0 to before number, expand result is undefined.

```c
MAC_BOOL(0); // 0
MAC_BOOL(0xff); // same as 255.
MAC_BOOL(0b11111111); // same as 255.
```

### MAC_BOOL

```c
#define MAC_BOOL(n) /* ... */
```

this macro take a number, then expand value if number is 0, 0, otherwise 1.

### MAC_INC, MAC_DEC

```c
#define MAC_INC(n) /* n + 1 */
#define MAC_DEC(n) /* n - 1 */
```

there macros expand increased or decreased number.

MAC_INC macro take a number, then expand an increased number by 1.
if increased number is over than max number, this expand max number as alternative of increased number.
default max number is 255.

MAC_DEC macro take a number, then expand a decreased number by 1.
if number is lesser than 0, this expand 0 as alternative for decreased result.

### MAC_ADD, MAC_SUB, MAC_MUL, MAC_DIV, MAC_MOD

```c
#define MAC_ADD(a, b) /* a + b */
#define MAC_SUB(a, b) /* a - b */
#define MAC_MUL(a, b) /* a * b */
#define MAC_DIV(a, b) /* a / b */
#define MAC_MOD(a, b) /* a % b */
```

there macro expand calculated result.

MAC_ADD macro take two number, then calculate addition, last expand calculation result. 
if calculation result is over the max number, this expand max number as alternative for calculation result.
default max number is 255.

MAC_SUB macro take two number, then calculate subtraction, last expand calculation result.
if calculation result is under the 0, this expand 0 as alternative for calculation result.

MAC_MUL take multiplicand and multiplier, then calculate multiplication, last expand calculation result.
if calculation result is over the max number, this expand max number as alternative for calculation result.
default max number is 255.

MAC_DIV take dividend and divisor, then calculate division, last expand quotient.
if take 0 for divisor, expand value is undefined.

MAC_MOD take dividend and divisor, then calculate division, last expand surplus.
if take 0 for divisor, expand value is undefined.

### MAC_LOGNOT, MAC_LOGAND, MAC_LOGOR

```c
#define MAC_LOGNOT(n)    /* ~n */
#define MAC_LOGAND(a, b) /* a & b */
#define MAC_LOGOR(a, b)  /* a | b */
```

there macros calculate bit operation, then expand calculation result. 
those calculation results change by number of bit width that set on build. 
default bit width is 8.

MAC_LOGNOT macro take a number, then calculate NOT operation with argument, last expand calculated result.

MAC_LOGAND macro take two number, then calculate AND operation with arguments,  last expand calculation result.

MAC_LOGOR macro take two number, then calculate OR operation with arguments,  last expand calculation result.

### MAC_LSHIFT, MAC_RSHIFT

```c
#define MAC_LSHIFT(n, seekwidth) /* n << seekwidth */
#define MAC_RSHIFT(n, seekwidth) /* n >> seekwidth */
```

there macros calculate shift operation, then expand calculation result.
those calculation results change by number of bit width that set on build. 
default bit width is 8.

MAC_LSHIFT macro take a number and seek width, then shift first argument to left by second argument, last return calculation result.
if calculation result is over than max number, this expand max number as alternative of calculation result. 
default max number is 255.

MAC_RSHIFT macro take a number and seek width, then shift first argument to right by second argument, last return calculation result.
if calculation result is lesser than 0, this expand 0 as alternative of calculation result. 

### MAC_NOT, MAC_AND, MAC_OR

```c
#define MAC_NOT(n)    /* !n */
#define MAC_AND(a, b) /* a && b */
#define MAC_OR(a, b)  /* a || b */
```

there macros calculate logical operation.

MAC_NOT macro take a number, then invert its boolean.

MAC_AND macro take two numbers, if both number are true, return true, otherwise false.

MAC_OR macro take two numbers, if either number are true, return true, otherwise false.

### MAC_EQUAL, MAC_UNEQUAL, MAC_LESSER, MAC_LESSER_OR_EQUAL, MAC_GREATER, MAC_GREATER_OR_EQUAL 

```c
#define MAC_EQUAL(a, b)            /* a == b */
#define MAC_UNEQUAL(a, b)          /* a != b */
#define MAC_LESSER(a, b)           /* a <  b */
#define MAC_LESSER_OR_EQUAL(a, b)  /* a <= b */
#define MAC_GREATER(a, b)          /* a >  b */
#define MAC_GREATER_OR_EQUAL(a, b) /* a >= b */
```

there macros compare numbers.

MAC_EQUAL macro compare two numbers, 
if two number are equal, this expand 1, otherwise 0.

MAC_UNEQUAL macro compare two numbers, 
if two number are unequal, this expand 1, otherwise 0.

MAC_LESSER macro compare two numbers, 
if first argument is less than second argument, expand 1, otherwise 0.

MAC_LESSER_OR_EQUAL macro compare two numbers, 
if first argument is less or equal than second argument, expand 1, otherwise 0.

MAC_GREATER macro compare two numbers,
if first argument is greater than second argument, expand 1, otherwise 0.

MAC_GREATER_OR_EQUAL macro compare two numbers,
if first argument is greater or equal than second argument, expand 1, otherwise 0.

### MAC_WHILE 

```c
#define MAC_WHILE(func, acc, ...) /* ... */
#define doanything(acc, ...) /* cond, newacc, ... */
```

this macro take a function styled macro, initial loop result, and variable length arguments, then execute first argument while match the condition.
first argument macro must take arguments that count is same as second arguments and later.
and it must return multiple value with separate by comma.
that are judgement result of loop condition, and updated values of rest arguments.

this macro has not supported infinite loop.
so, if loop reached to max count, this abort looping, then return last loop result.
maximum loop count is a max number supported by this library that is decide on build.

this example, define a macro that take iteration count and string then expand second argument repeatedly until count of first argument.

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

this macro take a function styled macro, initial loop result, and variable length arguments, then execute first argument until match the condition.
first argument macro must take arguments that count is same as second arguments and later.
and it must return multiple value with separate by comma.
that are judgement result of loop condition, and updated values of rest arguments.

this macro has not supported infinite loop.
so, if loop reached to max count, this abort looping, then return last loop result.
maximum loop count is a max number supported by this library that is decide on build.

this example, define a macro that take iteration count and string then expand second argument repeatedly until count of first argument.

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

this macro take a iteration count, function styled macro, initial loop result, and variable length arguments, then execute second argument until count of first argument. 
second argument macro must take arguments that count is same as third arguments and later. 
and it must return multiple value with separate by comma. that are judgement result of loop condition, and updated values of rest arguments.

this example, define a macro that take iteration count and string then expand second argument repeatedly until count of first argument.

```c
#define REPEATITER(acc, repeatstr) acc repeatstr, repeatstr 
#define REPEAT(count, repeatstr) MAC_DOTIMES(count, REPEATITER, "", repeatstr)

REPEAT(3, "Repeating!") // expand as "Repeating!" "Repeating!" "Repeating!".
```

## Installation

Mac contain makefile for build.
so you can build library with this command.
if build is success, create a mac.h to dist directory.

```shell
$ make 
```

when build library, you can change bit width of library supported integer with bits option.
if you dont give this option, makefile use default value of 8.

```shell
$ make bits=8
```

Mac contain simple test codes.
so you can execute test with this command.
be careful, I wrote this test codes for 8 bits, 
so test code may fail if library built by another bit width.

```shell
$ make test
```

## License 

Mac has released under the [GNU General Public License version3](LICENSE).
