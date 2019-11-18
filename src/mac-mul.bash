
cat <<EOF

#define MAC_MUL(a, b) MAC_CONCAT(MAC_MUL, b)(a, 0)
#define MAC_MUL0(a, acc) acc

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(1, MAX +1):
	print("#define MAC_MUL{current}(a, acc) MAC_MUL{next}(a, MAC_ADD(acc, a))".format(current=n, next=n-1))

EOF
