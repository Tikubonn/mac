
cat <<EOF

#define MAC_LSHIFT(n, s) MAC_CONCAT(MAC_LSHIFT, MAC_TO_INT(s))(MAC_TO_INT(n))
#define MAC_LSHIFT0(n) n

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for bits in range(1, MAXBITS +1):
	print("#define MAC_LSHIFT{current}(n) MAC_LSHIFT{next}(MAC_MUL(n, 2))".format(current=bits, next=bits-1))

for n in range(MAXBITS +1, MAX+1):
	print("#define MAC_LSHIFT{current} {max}".format(current=n, max=MAX))

EOF
