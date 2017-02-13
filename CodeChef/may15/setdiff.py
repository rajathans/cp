mod = 1000000007
t = int(raw_input())
while t>0:
	t -= 1
	mi=ma=0
	n = int(raw_input())
	a = [int(i) for i in raw_input().split()]
	a.sort()
	
	i = 0
	while i<n:
		mi=(mi*2 + a[i])%mod
		i+=1

	i=n-1
	while i>=0:
		ma=(ma*2 + a[i])%mod
		i-=1

	if ma-mi>=0:
		print ma-mi
	else:
		print ma-mi+mod