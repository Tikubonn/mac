
cat <<EOF

#define MAC_LOGNOT(n) MAC_LOGNOT$1(MAC_TO_INT(n))
#define MAC_LOGNOT0(n) 0

EOF

python <<EOF

MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_LOGNOT{current}(n) MAC_ADD(MAC_MUL(MAC_LOGNOT{next}(MAC_DIV(n, 2)), 2), MAC_NOT(MAC_MOD(n, 2)))".format(current=bits, next=bits-1))

EOF
