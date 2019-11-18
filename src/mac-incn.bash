
cat <<EOF

#define MAC_INC(n) MAC_INC1(n)

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for bits in range(0, MAXBITS):
	
	basenum = 1 << bits 
	
	print("#define MAC_INC{basenum}(n) MAC_CONCAT(MAC_INC{basenum}_, n)".format(basenum=basenum))
	
	for n in range(MAX +1):
		
		increased = min(MAX, n + basenum)
		
		print("#define MAC_INC{basenum}_{number} {increased}".format(basenum=basenum, number=n, increased=increased))

EOF
