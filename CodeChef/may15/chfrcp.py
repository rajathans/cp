t = int(raw_input())
while t>0:
	t-=1
	su = 0
	f = 1
	n = int(raw_input())
	a = [int(i) for i in raw_input().split()]
	i = 0
	while i<n:
		if a[i]<2:
			f = 0
		i+=1
	if not(f):
		print "-1"
		continue
	a.sort()
	i = 1
	while i<n:
		su+=a[i]
		i+=1
	su+=2
	print su