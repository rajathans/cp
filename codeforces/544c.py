def inverse(n,MOD):
	return pow(n, MOD-2, MOD)

def calculate(n,r,MOD):
	f = [1]*(n+1)
	k = 1
	f1 = r1 = x1 = 1
	i = 2
	while i<=n:
		k=(k*i) % MOD
		if i==r:
			r1=k
		elif i==n-r:
			x1=k
		i+=1
	return (k*((inverse(r1, MOD) * inverse(x1, MOD)) % MOD)) % MOD

n = int(raw_input())
a = [0]*n
i = j = 0
for i in xrange(0,n):
	a[i] = int(raw_input())
	j = j+a[i]
i-=1
z = 1
while i>0:
	z = z*calculate(j-1,a[i]-1,1000000007)
	z = z % 1000000007
	j = j - a[i]
	i-=1
print z