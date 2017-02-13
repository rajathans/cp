t = int(raw_input())
while t>0:
	t = t - 1
	s = raw_input()
	l = len(s)
	temp = s[l-1]

	while l>0:
		if s[l-1]=='+':
			temp = temp + s[l-2]
		elif s[l-1]=='-':
			temp = temp - s[l-2]
		else:
			temp = temp * s[l-2]
		l = l - 2

	print temp
