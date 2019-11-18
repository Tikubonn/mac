
cat <<EOF

#define MAC_WHILE0(func, cond, acc, ...) acc

EOF

python <<EOF

MAX = (1 << $1) -1

print("#define MAC_WHILE(func, acc, ...) MAC_WHILE{max}(func, 1, acc, __VA_ARGS__)".format(max=MAX))

for n in range(1, MAX +1):
	print("""
#define MAC_WHILE{current}(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE{current}IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE{current}IN(func, args) MAC_WHILE{next}(func, args)
""".format(current=n, next=n-1))

EOF
