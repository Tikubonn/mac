
cat <<EOF

#define MAC_MOD(a, b) MAC_CONCAT(MAC_MOD, MAC_TO_INT(a))(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_MOD0(a, b) a

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(1, MAX +1):
	print("#define MAC_MOD{current}(a, b) MAC_IF(MAC_LESSER(a, b), MAC_MOD0(a, b), MAC_MOD{next}(MAC_SUB(a, b), b))".format(current=n, next=n-1))

EOF
