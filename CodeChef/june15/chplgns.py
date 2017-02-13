t = int(raw_input())
while t>0:
	t-=1
	n = int(raw_input())
	v = [[] for z in range(n)]
	i = 0
	while i<n:
		m = int(raw_input())
		x = []
		y = []
		coord = [int(z) for z in raw_input().split()]
		x.append(coord[0])

		min_x = 10000000000

		j = 1
		while j<len(coord):
			if j%2!=0:
				y.append(coord[j])
			else:
				x.append(coord[j]) 
			j+=1

		j = 0
		while j<len(y):
			min_x = y[j] if min_x > y[j] else min_x
			j+=1
		v[i] = [min_x, i]
		i+=1
	v = sorted(v, key=lambda x: x[0], reverse= True)
	#print v

	arr = [0]*n

	i = 0
	while i<n:
		flag = 0
		ans = 0
		arr[v[i][1]] = str(i)
		i+=1

	print ' '.join(arr)

