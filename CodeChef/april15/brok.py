t = int(raw_input())
while t>0:
	t = t - 1
	n = int(raw_input())
	msg = [int(i) for i in raw_input().split()]
	c = 0
	k = 1
	if msg[0] != msg[1]:
		c += 2
		k = 2
	i = k
	while i<n-1:
		f = 0
		if msg[i] != msg[i-1]:
			f = 1
		if msg[i] != msg[i+1]:
			f = 2
			i += 1
		if f == 1:
			c += 1
		elif f == 2:
			c += 2
		i += 1
	if i != n and msg[n-1] != msg[n-2]:
		c += 1
	print c