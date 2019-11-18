
cat <<EOF

#define MAC_LOGAND(a, b) MAC_LOGAND$1(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_LOGANDBIT00 0
#define MAC_LOGANDBIT10 0
#define MAC_LOGANDBIT01 0
#define MAC_LOGANDBIT11 1
#define MAC_LOGAND0(a, b) 0

EOF

python <<EOF

MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_LOGAND{current}(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND{next}(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))".format(current=bits, next=bits-1))

EOF
