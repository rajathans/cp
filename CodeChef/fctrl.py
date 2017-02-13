a = raw_input()
for da in range(int(a)):
	f = int(raw_input())
	i = 5
	r = 0
	while (f//i > 0):
		r += f//i
		i*=5
	print r 