tc = int(raw_input())
while tc>0:
	tc -= 1
	n,k,q = map(int, raw_input().split())
	name = raw_input()
	i = 0

	while i<q:
		l,r = map(int, raw_input().split())
		p = name[l-1:r]
		sz = len(p)

		c1 = p.count('0')
		c2 = p.count('1')

		if c1<=k and c2<=k:
			print sz*(sz+1)/2

		else:
			counter = 0
			j = 0
			while j<len(p):
				t = 1
				while t<=len(p)-j:
					ur = p[j:j+t]
					d1 = ur.count('0')
					d2 = ur.count('1')
					if d1<=k and d2<=k:
						counter += 1
					t+=1
				j+=1
			print counter
		i+=1