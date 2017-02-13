t=int(raw_input())
while t>0:
	t-=1
	n,k,q=map(int,raw_input().split())
	a=raw_input()
	x=y=0
	ans = 0
	z = [0]*(n+1)
	o = [0]*(n+1)

	i = 0
	while i<n:
		if a[i] == '0':
			x+=1
			z[i] = x
			o[i] = y
		else:
			y+=1
			z[i]=x
			o[i]=y
		i+=1

	i = 0
	while i<q:
		ans = count = 0
		l,r=map(int,raw_input().split())
		length = r-l+1
		newl = l

		j = 0
		while j<k:
			ans =ans + length - j
			j+=1

		d = length - j
		sl = l + k -1

		while d>0:
			d = d -1
			v = 0
			newl = l
			if (sl-l+2) <= 2*k:
				p = sl
				while p<r:
					if newl == 1:
						if z[p]<=k and o[p]<=k:
							count+=1
						newl+=1
					else:
						m = z[l-2+v]
						n = o[l-2+v]
						v+=1
						if (z[p]-m)<=k and (o[p]-n)<=k:
							count+=1
					p+=1
			sl+=1
		ans = ans + count
		print count
		i+=1