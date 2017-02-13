g = [0]*2
b = [0]*2
t = int(raw_input())
while t>0:
	t = t - 1
	typ = int(raw_input())
	if typ == 2:
		typ = 1
	s = raw_input()
	c1=c2=b1=b2=g1=g2=0
	n = len(s)
	i = 0
	while i<n:
		if i%2 ==0:
			if s[i] =='G':
				g[g1]=i
				g1 = g1 + 1
		else:
			if s[i] == 'B':
				b[b1] = i
				b1 = b1 + 1
		i = i + 1

	if b1 != g1:
		c1 = -1
	else:
		i = 0
		while i<b1:
			c1 = c1 + pow(abs(g[i]-b[i]),typ)
			i = i + 1
	i = 0
	while i<n:
		if i%2 == 0:
			if s[i] =='B':
				b[b2]=i
				b2 = b2 + 1
		else:
			if s[i] == 'G':
				g[g2] = i
				g2 = g2 + 1
		i = i + 1

	if g2 != b2:
		c2 = -1
	else:
		i = 0
		while i<b2:
			c2 = c2 + pow(abs(g[i]-b[i]),typ)
			i = i + 1

	if c1==-1 or c2==-1:
		if c1>c2:
			print c1
		else:
			print c2
	else:
		if c1<c2:
			print c1
		else:
			print c2