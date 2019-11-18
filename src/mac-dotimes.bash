
cat <<EOF

#define MAC_DOTIMES(n, func, acc, ...) MAC_CONCAT(MAC_DOTIMES, n)(func, acc, __VA_ARGS__)
#define MAC_DOTIMES0(func, acc, ...) acc

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(1, MAX +1):
	print("""
#define MAC_DOTIMES{current}(func, acc, ...) MAC_DOTIMES{current}IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES{current}IN(func, args) MAC_DOTIMES{next}(func, args)
""".format(current=n, next=n-1))

EOF
