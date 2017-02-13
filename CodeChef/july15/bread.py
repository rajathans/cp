from fractions import gcd
t = int(raw_input())
while t>0:
	t-=1
	inputs = raw_input().split()
	n = int(inputs[0])
	k = int(inputs[1])

	a = [int(i) for i in raw_input().split()]
	su = 0

	for i in xrange(0,n):
		temp = a[i]
		su+=temp
		if i==n-1 or su%k==0:
			pass
		else:
			su+=1

	if su%k==0:
		print su/k
	else:
		print su/k+1	