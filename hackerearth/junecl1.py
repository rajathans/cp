def sum_digits3(n):
	r = 0
	while n:
		r, n = r + n % 10, n / 10
	return r
a,b,x,y,k = map(int, raw_input().split())
for x in xrange(a,b):
	temp = list(str(x))
	print temp