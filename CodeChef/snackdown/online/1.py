import sys
t = int(sys.stdin.readline())
while t>0:
	t-=1
	n = int(sys.stdin.readline())
	if n<9:
		print min(9-n,n)
		continue
	value = map(int, str(n))
	#print value
	l = len(value)
	su = 0
	for i in xrange(0,len(value)):
		su+=ord(str(value[i]))-ord('0')
		#print su
	print min(su%9,9-su%9)