
cat <<EOF

#define MAC_DEC(n) MAC_DEC1(n)

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for bits in range(0, MAXBITS):
	
	basenum = 1 << bits 
	
	print("#define MAC_DEC{basenum}(n) MAC_CONCAT(MAC_DEC{basenum}_, n)".format(basenum=basenum))
	
	for n in range(MAX +1):
		
		decreased = max(0, n - basenum)
		
		print("#define MAC_DEC{basenum}_{number} {decreased}".format(basenum=basenum, number=n, decreased=decreased))

EOF
