
cat <<EOF

#define MAC_UNTIL0(func, cond, acc, ...) acc

EOF

python <<EOF

MAX = (1 << $1) -1

print("#define MAC_UNTIL(func, acc, ...) MAC_UNTIL{max}(func, 0, acc, __VA_ARGS__)".format(max=MAX))

for n in range(1, MAX +1):
	print("""
#define MAC_UNTIL{current}(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL{current}IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL{current}IN(func, args) MAC_UNTIL{next}(func, args)
""".format(current=n, next=n-1))

EOF
