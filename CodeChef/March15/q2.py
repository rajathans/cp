t = int(raw_input())
while t>0:
	t = t - 1
	n,k,q = map(int, raw_input().split())
	ones = [0]*(n+4)
	zeroes = [0]*(n+4)
	strr = [int(i) for i in raw_input()]
	print strr

	it1 = 0
	while it1<n:
		zeroes[it1+1] = zeroes[it1]
		ones[it1+1] = ones[it1]

		if strr[it1] == '0':
			zeroes[it1+1] = zeroes[it1+1] + 1
		else:
			ones[it1+1] = ones[it1+1] + 1

		it1 = it1 + 1

	it2 = 0
	while it2<q:
		l,r = map(int, raw_input().split())
		ans = 0
		it3 = l
		while it3<=r:
			it4 = it3
			while it4<=r:
				if (zeroes[it4] - zeroes[it3-1] <= k):
					if (ones[it4] - ones[it3-1] <= k):
						ans = ans + 1
				else:
					break
				it4 = it4 + 1
			it3 = it3 + 1
		print ans
		it2 = it2 + 1