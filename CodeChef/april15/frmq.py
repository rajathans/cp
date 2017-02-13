import sys
n = int(sys.stdin.readline())
ans = 0
a = [int(i) for i in sys.stdin.readline().split()]
m,x,y = map(int, sys.stdin.readline().split())
while m>0:
	m-=1
	if x>y:
		maxi = a[y]
		j = y+1
		while j<=x:
			maxi = a[j] if a[j]>maxi else maxi
			j +=1
	else:
		maxi = a[x]
		j = x+1
		while j<=y:
			maxi = a[j] if a[j]>maxi else maxi
			j+=1
	ans = ans + maxi
	x = (x+7)%(n-1)
	y = (y+11)%n
print ans