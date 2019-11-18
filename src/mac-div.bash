
cat <<EOF

#define MAC_DIV(a, b) MAC_CONCAT(MAC_DIV, MAC_TO_INT(a))(MAC_TO_INT(a), MAC_TO_INT(b), 0)
#define MAC_DIV0(a, b, division) division

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(1, MAX +1):
	print("#define MAC_DIV{current}(a, b, division) MAC_IF(MAC_LESSER(a, b), MAC_DIV0(a, b, division), MAC_DIV{next}(MAC_SUB(a, b), b, MAC_INC(division)))".format(current=n, next=n-1))

EOF
