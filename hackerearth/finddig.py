t = int(raw_input())
while t>0:
	t = t -1
	result = 0
	number = raw_input()
	n = int(number)
	i = 0
	while i<len(number):
		if number[i] != "0":
			if n % int(number[i]) == 0:
				result += 1
		i = i - 1
	print result