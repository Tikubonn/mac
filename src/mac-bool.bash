
cat <<EOF

#define MAC_BOOL(n) MAC_CONCAT(MAC_BOOL, MAC_TO_INT(n))
#define MAC_BOOL0 0

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(1, MAX +1):
	print("#define MAC_BOOL{number} 1".format(number=n))

EOF
