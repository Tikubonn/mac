
cat <<EOF

#define MAC_SUB(a, b) MAC_CONCAT(MAC_SUB, MAC_TO_INT(b))(MAC_TO_INT(a))

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for n in range(MAX +1):
	
	number = n
	
	print("#define MAC_SUB{number}(n) ".format(number=number), end="")
	
	decnums = list()
	
	for bits in reversed(range(0, MAXBITS)):
		
		decnum = 1 << bits 
		
		while decnum <= number:
			decnums.append(decnum)
			number -= decnum
	
	for decnum in decnums:
		
		print("MAC_DEC{decnum}(".format(decnum=decnum), end="")
		
	print("n", end="")
	
	for decnum in decnums:
	
		print(")", end="")
		
	print()

EOF
