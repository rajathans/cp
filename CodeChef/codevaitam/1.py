import math
t = int(raw_input())
while(t>0):
	t = t - 1
	n,k = map(int, raw_input().split())
	example = [int(z) for z in raw_input().split()]
	maxi = max(example)
	#print maxi
	#print math.factorial(n)
	print (math.factorial(n) % maxi)