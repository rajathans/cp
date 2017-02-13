t = int(raw_input())
while t>0:
	t-=1
	n = int(raw_input())
	values = [int(i) for i in raw_input().split()]
	original = values

	i = 0
	while i>0:
		values = original
		values.pop(i)
		