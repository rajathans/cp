ans = 0
n,k = map(int, raw_input().split())
a = [int(i) for i in raw_input().split()]
a.append(0)
#a = shift(a,1)
#print a

#for i in xrange(1,n+1):
#	for j in xrange(1,10):
#		pass

e1 = a[-1]
for i, e2 in enumerate(a):
	a[i], e1 = e1, e2

#print a

for i in xrange(0,n):
	for j in xrange(i+1,n):
		if a[i]%a[j] == k:
			ans += n-j+1
			break

print n*(n+1)/2-ans