br = [0]*10000000

n,m = map(int, raw_input().split())
ar = [int(i) for i in raw_input().split()]
flag = 0

for i in xrange(0,n):
	br[ar[i]]+=1

for i in xrange(0,n-1):
	maxi = ar[i]
	for j in xrange(i+1,n):
		if ar[j]>maxi:
			maxi = ar[j]
			br[maxi]+=1

for i in xrange(0,10000000):
	flag+=br[i]
	br[i]=flag

ans = []
while m>0:
	m-=1
	c2,no,c4 = map(str, raw_input().split())
	no = int(no)
	if c2=='<':
		tmp = br[no-1]
	elif c2=='=':
		tmp = br[no]-br[no-1]
	else:
		tmp = br[9999999]-br[no]
	if tmp%2==0:
		if c4=='D':
			ans.append("C")
		else:
			ans.append("D")
	else:
		if c4=='D':
			ans.append("D")
		else:
			ans.append("C")

print ''.join(ans)