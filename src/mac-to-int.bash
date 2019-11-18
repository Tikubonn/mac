
cat <<EOF

#define MAC_TO_INT(n) MAC_CONCAT(MAC_TO_INT, n)

EOF

python <<EOF

MAX = (1 << $1) -1

for n in range(MAX +1):
	print("#define MAC_TO_INT{number} {number}".format(number=n))

for n in range(MAX +1):
	print("#define MAC_TO_INT{bin} {number}".format(bin=bin(n), number=n))

for n in range(MAX +1):
	print("#define MAC_TO_INT{hex} {number}".format(hex=hex(n), number=n))

EOF
