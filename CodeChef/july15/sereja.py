import numpy

t = int(raw_input())
while t>0:
	t-=1
	n,m = map(int,raw_input().split())
	prob1 = 1.0
	summ = 0.0
	powcount = 0
	x = [float(z) for z in raw_input().split()]
	for i in xrange(0,m):
		prob1 = prob1*x[i]
		if prob1 < 0.000001:
			powcount+=4
			prob1 = prob1 * 10000
	summ = prob1
	for i in xrange(1,n):
		prob = 0.0
		mypowcount = 0
		x = [float(z) for z in raw_input().split()]
		for i in xrange(0,m):
			prob *=x[i]
			if prob < 0.000001:
				mypowcount+=4
			prob *= 10000
		if mypowcount < powcount:
			diff = powcount - mypowcount
			prob = prob * pow(10, diff)
		elif mypowcount > powcount:
			diff = mypowcount - powcount
			while diff>0:
				diff-=1
				prob/=10
		summ+=prob
	if prob1 == 0:
		print "0.000000"
	else:
		ans = prob1/summ
		print "%.6f" % ans