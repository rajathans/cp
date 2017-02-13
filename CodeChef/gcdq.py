def gcd(a,b):
	if(b==0):
		return a
	return gcd(b,a%b)

t=int(raw_input())

while (t>0):
    t=t-1
    n,q = map(int, raw_input().split())
    a = [int(i) for i in raw_input().split()]
    while(q>0):
	    l,r = map(int, raw_input().split())
	    temp = 0
	    ans = 0
	    for k in range(0,n):
	    	if(k+1<l or k+1>r):
	    		if(temp == 0):
	    			ans = a[k]
	    			continue
	    		ans = gcd(a[k],ans)
	    	temp=temp+1
	    print ans
	    q=q-1