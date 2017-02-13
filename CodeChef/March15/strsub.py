t = int(raw_input())

cnt0 = 0
cnt1 = 0
count = 0

c = 0
while c<t:
	n,k,q = map(int, raw_input().split())

	left = [0]*q
	right = [0]*q

	str = raw_input()

	idx = [0]*(n+1)
	cum = [0]*(n+1)

	i = 0
	while i<q:
		left[i], right[i] = map(int, raw_input().split())
		i = i + 1

	i = 0
	while i<q:
		left[i] = left[i] - 1
		right[i] = right[i] - 1

	conver = 0
	while cover<q:
		count = 0
		i = left[cover]
		while (i<=right[cover]):
			latest = ""
			j = i
			while j <= right[cover]:
				cnt0 = 0
				cnt1 = 0
				latest = latest + s[j]
				