import sys
MOD = 99991
F = {}
def func(n):
	if n in F:
		return F.get(n)
	k = n/2
	if n%2==0:
		x=(func(k)*func(k)+func(k-1)*func(k-1))%MOD
	else:
		x=(func(k)*func(k+1)+func(k-1)*func(k))%MOD
	F[n] = x
	return x

n,k = map(int, sys.stdin.readline().split())
a = [int(i) for i in sys.stdin.readline().split()]
ans = 0
F = {}
F[0] = 1
F[1] = 1
for i in xrange(0,1<<n):
	if bin(i).count('1')!=k:
		continue
	su = 0
	for j in xrange(0,n):
		temp = i & (1<<j)
		if temp>0:
			su+=a[j]
		#print su
	ans = (ans+func(su-1))%MOD
print ans