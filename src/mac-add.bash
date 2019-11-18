
cat <<EOF

#define MAC_ADD(a, b) MAC_CONCAT(MAC_ADD, MAC_TO_INT(b))(MAC_TO_INT(a))

EOF

python <<EOF

MAX = (1 << $1) -1
MAXBITS = $1

for n in range(MAX +1):
	
	number = n
	
	print("#define MAC_ADD{number}(n) ".format(number=number), end="")
	
	incnums = list()
	
	for bits in reversed(range(0, MAXBITS)):
		
		incnum = 1 << bits 
		
		while incnum <= number:
			incnums.append(incnum)
			number -= incnum
	
	for incnum in incnums:
		
		print("MAC_INC{incnum}(".format(incnum=incnum), end="")
		
	print("n", end="")
	
	for incnum in incnums:
	
		print(")", end="")
		
	print()

EOF
