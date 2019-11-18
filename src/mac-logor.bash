
cat <<EOF

#define MAC_LOGOR(a, b) MAC_LOGOR$1(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_LOGORBIT00 0
#define MAC_LOGORBIT10 1
#define MAC_LOGORBIT01 1
#define MAC_LOGORBIT11 1
#define MAC_LOGOR0(a, b) 0

EOF

python <<EOF

MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_LOGOR{current}(a, b) MAC_ADD(MAC_MUL(MAC_LOGOR{next}(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))".format(current=bits, next=bits-1))

EOF
