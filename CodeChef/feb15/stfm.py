n,m = map(int, raw_input().split())

p = [0]* (m+1)
g = [0]* (m+1)

def mini(x,y):
	if x<=y:
		return x
		pass
	else:
		return y
		pass
	pass

def f(x):
	ans = g[mini(x,m-1)]
	summ = m * (m+1)/2
	summ = summ % m
	t = (x/m) * summ
	t = t % m
	t = t+ (x % m) * (x % m + 1) / 2
	t =t% m
	x =x% m
   	t =t* x
   	t =t% m
   	return (ans+t)%m
	pass

#print n
#print m

p[0] = 1
p[1] = 1

i1 = 2
while i1<m:
	p[i1] = p[i1-1] * i1
	p[i1] = p[i1] % m
	i1 = i1 + 1
	pass

i2 = 1
while i2<m:
	g[i2] = g[i2-1] + p[i2] * i2
	g[i2] = g[i2]%m
	i2 = i2 +1
	pass

ans = 0
#example = [int(z) for z in raw_input().split()]

for i in map(int,raw_input().split()):
	ans = ans + f(i)
	ans = ans % m
	pass

print ans