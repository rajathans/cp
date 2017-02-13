t = int(raw_input())
while t>0:
	t = t - 1
	n,k,q = map(int, raw_input().split())
	s = raw_input()
	while q>0:
		p = 0
		l,r = map(int, raw_input().split())
		p = r - l + 1
		p = p*(p+1)/2
		i = l - 1
		while i<r:
			j = r - l + 1
			while j>0:
				ca = 0
				cb = 0
				if j+i <= r:
					b = i
					c = 0
					while c<j:
						if s[b] == '0':
							ca = ca + 1
						elif s[b] == '1':
							cb = cb + 1
						c = c + 1
						b = b + 1
					if ca>k or cb>k:
						p = p - 1
				j = j - 1
			i = i + 1
		q = q - 1
		print p