import sys
fib = [0]*33330
fib[0] = 0
fib[1] = 1
for i in xrange(2,33330):
	fib[i] = (fib[i - 1] + fib[i - 2]) % 99991
n,k = map(int, sys.stdin.readline().split())
a = [int(i) for i in sys.stdin.readline().split()]
ans = 0
for i in xrange(1,1<<n):
	cnt = su = 0
	for j in xrange(0,n):
		temp = i>>j & 1
		if temp:
			cnt+=1
			su+=a[j]
	#print "sum a:", sum(a)
	#print "sum:",su
	if cnt==k:
		ans = (ans + fib[su % 33330]) % 99991
print ans