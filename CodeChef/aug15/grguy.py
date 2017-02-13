l = []
def tryrun(li):
	i = ct = 0
	while l[li][i]:
		if l[li][i] == '#':
			return 9223372036854775807
		while l[li][i] == '.':
			i+=1
		li = not(li)
		ct+=1
	return ct-1

t = int(raw_input())
while t>0:
	t-=1
	l1 = raw_input()
	l[0] = list(l1)
	l2= raw_input()
	l[1] = list(l2)
	a = min(tryrun(0), tryrun(1))
	if a == 9223372036854775807:
		print "No"
	else:
		print "Yes"
		print a