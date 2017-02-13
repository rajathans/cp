def digsum(num):
	su = 0
	while num>0:
		su+=num%10
		num/=10
	if su>9:
		su = digsum(su)
	return su

t = int(raw_input())
while t>0:
	t-=1
	n = int(raw_input())
	a = [0]*n
	b = [0]*n
	string = []

	i=0
	while i<n:
		a[i],b[i] = map(int, raw_input().split())
		j = 0
		while j<a[i]:
			string.append(str(b[i]))
			j+=1			
		i+=1

	num = int(''.join(string))
	print digsum(num)