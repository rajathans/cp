import math
from fractions import gcd

def fastgcd(a,b):
	while gcd(a,b)!=1:
		b=b/gcd(a,b)
	if b==1:
		return "Yes"
	else:
		return "No"

t = int(raw_input())
while t>0:
	t-=1
	a,b = map(int, raw_input().split())
	print fastgcd(a,b)