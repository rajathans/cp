t = int(raw_input())
while t>0:
	t = t - 1
	su = 0
	n = int(raw_input())
	if n != 1:
		su = n + 1
		temp = z = 0
		l = 0.0
		l = n**.5
		if l %1 == 0:
			su = su + long(l)
			z = long(l - 1)
		else:
			z = long(l)
		i = 2
		while i<=z:
			if n % 1 == 0:
				temp = n/i
				su = su + temp + long(n/temp)
			i += 1
	else:
		su = 1
	print su