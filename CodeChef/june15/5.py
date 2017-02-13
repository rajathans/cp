def get_all_substrings(input_string):
	length = len(input_string)
	return [input_string[i:j+1] for i in xrange(length) for j in xrange(i,length)]

def C(n, k):
	if 0 <= k <= n:
		ntok = 1
		ktok = 1
		for t in xrange(1, min(k, n - k) + 1):
			ntok *= n
			ktok *= t
			n -= 1
		return ntok // ktok
	else:
		return 0

t = int(raw_input())
while t>0:
	t-=1
	n,q = map(int, raw_input().split())
	s = raw_input()

	a = [0]*q
	m = {}

	p = get_all_substrings(s)

	i = 0
	while i<len(p):
		if p[i] in m:
			m[p[i]] += 1
		else:
			m[p[i]] = 1
		i+=1
	#print m
	value = m.values()
	#print value

	i = 0
	while i<q:
		a[i] = int(raw_input())
		count=0
		j = 0
		while j<len(value):
			if a[i]<=value[j]:
				count+=C(value[j],a[i])
			j+=1
		print count
		i+=1