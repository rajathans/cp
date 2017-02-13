t = int(raw_input())
while t>0:
	t=t-1
	n = int(raw_input())
	arr = [int(i) for i in raw_input().split()]
	count = len(set(arr))
	print count