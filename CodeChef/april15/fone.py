import sys

twoDarray = []
arr = []*100002

def gcd(a,b):
	if b>a:
		return gcd(b,a)
	else:
		if b == 0:
			return a
		else:
			return gcd(b,a%b)

def f():
	i = 0
	j = 1
	while i<n:
		twoDarray[i][0] = i
		i+=1
	while (1 << j) <= n:
		temp = 1 << j
		i = 0
		while (temp + i - 1) < n:
			if arr[twoDarray[i][j-1]] > arr[twoDarray[i+(1<<(j-1))][j-1]]:
				two_d_array[i][j] = two_d_array[i][j-1]
			else:
				two_d_array[i][j] = two_d_array[ i+( 1 << (j-1))][j-1]
			i+=1
		j+=1

def foo(x,y):
	if x > y:
		x = x + y
		y = x - y
		x = x - y
	k = 0
	while (1<<k) <= (y-x+1):
		k+=1
	k-=1
	if arr[ two_d_array[x][k] ] >= arr[ two_d_array[ y - ( 1 << k) + 1][k] ]:
		return two_d_array[x][k]
	else:
		return two_d_array[ y-( 1 << k) + 1][k]

res = 0
ss = -1
ss2 = 0
n = int(sys.stdin.readline())
arr = [int(i) for i in sys.stdin.readline().split()]
f()
m,x,y = map(int, sys.stdin.readline().split())
p1 = ( 7*(n-1) ) / gcd( 7 , n-1)
p2 = ( 11*n ) / gcd( 7 , n )
p3 = ( p1 * p2) / ( gcd(p1 , p2 ))
quotient = m / p3
rem = m % p3
i = 0
while i<p3:
	if i== rem:
		ss = res
	if i>m:
		break
	k = 1
	ss2 = foo(x,y)
	while i+k < m-1:
		py = (y + 11*k)
		px = x + 7*k
		if  (py >= n) or (px >= n-1):
			break
		if foo(px,py) != ss2:
			break
		k*=2
	res += arr[ ss2 ]*( k / 2 + 1)
	x = ( x + 7*( (k)/2+1)) % (n-1)
	y = ( y + 11*( k/ 2 + 1)) % n
if ss == 1:
	res = ss
print (res*quotient) + ss