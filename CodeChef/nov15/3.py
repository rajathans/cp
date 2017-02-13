import fractions 
t = int(raw_input())
while t>0:
	t-=1
	x = 0
	n = int(raw_input())
	if n>10000:
		i = 1
		while t<n/2:
			x+=2*(n/fractions.gcd(i,n))
			i+=1
		x+=3
	else:
		i = 1
		while i<n+1:
			x+=(n/fractions.gcd(i,n));
			i+=1
	print x