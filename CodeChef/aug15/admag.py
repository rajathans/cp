fiblist = [0]*201
fiblist[0]=0
fiblist[1]=1
for i in xrange(2,201):
	fiblist[i] = fiblist[i-1]+fiblist[i-2]

t = int(raw_input())
while t>0:
	t-=1
	n = int(raw_input())
	ans = 0
	for i in xrange(2,201):
		if fiblist[i] == n:
			ans = i
			break
		elif fiblist[i]>n:
			ans = i-1
			break
	print ans-1