mod = 1000003
def func(n, MOD):
	return pow(n,MOD-2,MOD)

f = [0]*mod
f[0] = 1
i = 1
while i<mod:
	f[i] = (f[i-1]*i)%mod
	i += 1

t = int(raw_input())
while t>0:
	t = t - 1
	n,l,r = map(int, raw_input().split())
	k = r - l
	ans = 0
	m = 1
	while k+m<mod and m<=n:
		ans+=(f[k+m]*((func(f[k], mod) * func(f[m], mod)) % mod)) % mod
		m+=1
	print ans