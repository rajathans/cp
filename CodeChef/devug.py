from fractions import gcd
t = int(raw_input())
while t>0:
	t=t-1
	n,k = map(int, raw_input().split())
	cnt = 0
	grapes = [int(i) for i in raw_input().split()]
	for num in grapes[:]:
		rem = num % k
		if (rem!=0 and rem>k/2) or (num-rem ==0):
			cnt+=k-rem
		else:
			cnt+=rem
	print cnt