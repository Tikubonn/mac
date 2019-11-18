
cat <<EOF

#define MAC_RSHIFT(n, s) MAC_CONCAT(MAC_RSHIFT, MAC_TO_INT(s))(MAC_TO_INT(n))
#define MAC_RSHIFT0(n) n

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_RSHIFT{current}(n) MAC_RSHIFT{next}(MAC_DIV(n, 2))".format(current=bits, next=bits-1))

for n in range(MAXBITS +1, MAX+1):
	print("#define MAC_RSHIFT{current} 0".format(current=n))

EOF
