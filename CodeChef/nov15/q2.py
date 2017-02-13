t = int(raw_input())
while t>0:
	t-=1
	n,m = map(int, raw_input().split())
	a = m+1
	b = 0
	count = 1
	ans = [0]*(a+1)
	ans[a] = 1
	while 1:
		b = 2*a-1
		b = b%n
		if ans[b] == 1:
			break
		ans[b] = 1
		a = b
		count+=1
	if count<n:
		print "No",count
	else:
		print "Yes"