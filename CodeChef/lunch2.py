n,q = map(int, raw_input().split())
numbers = []
for i in xrange(0,n):
	numbers.append([i+1])
while q>0:
	q-=1
	option = raw_input()
	#print numbers
	inp = option.split(" ")
	#print inp
	a = int(inp[1])
	b = int(inp[2])
	if inp[0] == 'UNION':
		newlist = numbers[a-1] + numbers[b-1]
		numbers[a-1] = numbers[b-1] = []
		numbers.append(newlist)
		#print numbers
	else:
		newshit = numbers[a-1]
		#print numbers[a-1]
		#print newshit
		newshitt = sorted(newshit)
		#print newshitt
		print newshitt[b-1]