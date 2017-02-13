t = int(raw_input())
while t>0:
	t-=1
	string = raw_input()
	string = list(string)
	length = len(string)
	i=1
	while i<length:
		if string[i]==string[i-1]:
			del string[i]
			i-=1
		else:
			i+=1
	print ''.join(string)