t = int(raw_input())
while t>0:
	t-=1
	ar = []
	n,x = map(int, raw_input().split())
	i = 0
	while i<n:
		z = int(raw_input())
		ar.append(z)
		i+=1
	i = 1
	ans = 0
	while i<n:
		ar = [sum(ar[l:l+i]) for l in range(0, len(ar))]
		if ar.index(x) in range(n):
			ans = 1
			break
		i+=1
	if ans==1:
		print "YES"
	else:
		print "NO"