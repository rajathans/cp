t = int(raw_input())
while t>0:
	t = t - 1
	s,c,k = map(int, raw_input().split())
	ans1 = ans = 0
	arr = [0]*52

	if s!=0 and k>s:
		ans = 0
	else:
		i = 0
		while i<51:
			arr[i] = 0
			i = i + 1

		i = 1
		while i<s:
			arr[i] = s - i
			i = i + 1

		i = 1
		while i<=c:
			arr[i] = arr[i] + 1
			i = i + 1

		i = 1
		while arr[i]>=k and i<=50:
			temp = pow(2,i)
			ans1 = temp
			ans = ans + ans1
			i = i + 1

		if s!=0:
			ans = ans + 3

	print ans