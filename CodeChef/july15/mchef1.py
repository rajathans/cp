def update(i,val,n,bit):
	while i<=n:
		bit[i]+=val
		i+=i&(-i)

def find(i,bit):
	val = 0
	while i:
		val+=bit[i]
		i-=i&(-i)
	return val

t = int(raw_input())
while t>0:
	t-=1
	n,k,m = map(int, raw_input().split())
	b = [0]*(n+1)
	bit = [0]*(n+1)
	bit1 = [0]*(n+1)

	su = 0
	a = [int(z) for z in raw_input().split()]
	for i in xrange(0,n):
		b[i] = 100007
		su+=a[i]
		if a[i]>0:
			a[i]=0
		update(i,a[i],n,bit)
	b[0] = 0
	while m>0:
		m-=1
		l,r,c = map(int, raw_input().split())
		if c<=k:
			for i in xrange(l-1,r):
				if b[i]>c:
					b[i]=c
	for i in xrange(0,n):
		if a[i]==0:
			b[i]=0
		update(i,b[i],n,bit1)

	sum1-=mod

	for i in xrange(0,n):
		for j in xrange(i-1,n):
			q = find(j,bit)- find(i-1,bit1)
			rs=find(j,bit)-find(i-1,bit)
			if q<=k:
				sum1=max(sum1,su-rs)
	if sum1==-mod:
		sum1=su
	print sum1