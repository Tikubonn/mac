
cat <<EOF

#define MAC_LOGXOR(a, b) MAC_LOGXOR$1(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_LOGXORBIT00 0
#define MAC_LOGXORBIT10 1
#define MAC_LOGXORBIT01 1
#define MAC_LOGXORBIT11 0
#define MAC_LOGXOR0(a, b) 0

EOF

python <<EOF

MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_LOGXOR{current}(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR{next}(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))".format(current=bits, next=bits-1))

EOF
