t = int(raw_input())
while t>0:
	t -= 1
	n = int(raw_input())
	a = [int(i) for i in raw_input().split()]
	i = su = 0
	su = sum(a)
	x = [0]*n
	su /= (n-1)
	while i<n:
		x[i] = su - a[i]
		i += 1
	a = str(x).replace('[', '').replace(',', '').replace(']','')
	print a