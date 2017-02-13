def kk(W,wt,val,n):
	K = [[0 for x in range(n+1)] for x in range(W+1)]
	for i in xrange(0,n+1):
		for w in xrange(0,W+1):
			if i==0 or w==0:
				K[i][w] = 0
			elif wt[i-1] <= w:
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w])
			else:
				K[i][w] = K[i-1][w]
	return K[n][W]

t = int(raw_input())
while t>0:
	t-=1
	su = 0
	inp = raw_input().split()
	n = int(inp[0])
	k = int(inp[1])
	m = int(inp[2])

	va = [0]*100005
	a = [int(i) for i in raw_input().split()]

	for i in xrange(0,n):
		su+=a[i]
		if a[i]<0:
			a[i]-=a[i]
		else:
			a[i]=0
		va[i]=201

	for i in xrange(0,m):
		newshit = raw_input().split()
		l = int(inp[0])
		r = int(inp[1])
		c = int(inp[2])

		for i in xrange(l-1,r):
			va[i]=min(va[i],c)
	temp = kk(k,va,a,n)
	print su+temp