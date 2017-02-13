from math import sqrt

def func(n,A,B,C):
	k1=1/A
	k2=1/B
	k4=1/C

	for i in xrange(4,n):
		d=sqrt((k1*k2)+(k2*k4)+(k1*k4))
		k=k1+k2+k4+(d*2)
		k4=k
	k=1/k
	return k

t = int(raw_input())
while t>0:
	t-=1
	n,p,m,b = map(int, raw_input().split())
	r1,r2,r3,r4 = map(int, raw_input().split())
	r1*=(-1)
	x = 0.0
	for i in xrange(0,t):
		n = (p*n)%m+b
		if n<5:
			if n==1:
				x = (-1)*r1
			elif n==2:
				x = r2
			elif n==3:
				x = r3
			elif n==4:
				x = r4
		else:
			x = func(n,r1,r2,r4)
			print "%.6f" % x