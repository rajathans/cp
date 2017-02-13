t = int(raw_input())
while t>0:
	t-=1
	n,m = map(int, raw_input().split())
	a = [int(i) for i in raw_input().split()]
	a.sort()
	ans = 0
	j = m-1
	i=0
	while i<j:
		if a[i]>1:
			a[i]-=1
		else:
			i+=1
		ans+=1
		j-=1
	print ans	