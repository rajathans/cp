import sys
MOD = 1000000007
vec = []
n,k,q = map(int, sys.stdin.readline().split())
v=u=0
a,b,c,d,e,f,r,s,t,m,v = map(int, sys.stdin.readline().split())
vec.append(v)
l1, la, lc, lm, d1, da, dc, dm = map(int, sys.stdin.readline().split())
L=R=su=0
mul=1
x=2
while x<=n:
	if pow(t, x, s)%s <= r:
		u=((((a*v)%m)*v)%m+(b*v)%m+c%m)%m
	else:bits/
		u=((((d*v)%m)*v)%m+(e*v)%m+f%m)%m
	v=u
	vec.append(v)
	x+=1
i=0
while i<q:
	l1=((la*l1)%lm+lc)%lm
	d1=((da*d1)%dm+dc)%dm
	L=l1+1
	if (L+k-1+d1)>=n:
		R=n
	else:
		R=L+k-1+d1
	temp = vec[L-1:R]
	mi = min(temp)
	su = su + mi
	mul = (mul*mi)%MOD
	i+=1
print su,mul%MOD