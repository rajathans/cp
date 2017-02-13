mod=1000000007
def expo(a,b):
	if(b==1):
		return a%mod
	if(b==2):
		return ((a%mod)*(a%mod))%mod
	if(b%2==0):
		return(((expo(a,b/2))%mod)*((expo(a,b/2))%mod))%mod
	else:
		return ((a%mod)*((expo(a,(b-1)/2))%mod)*((expo(a,(b-1)/2))%mod))
 
t=int(input())
while(t>0):
    line=input()
    k=line.split(' ')
    m=int(k[0])
    n=int(k[1])
    m=m%mod
    n=n%mod
    l=expo(m,n)
    print(l,end='\n')
    t=t-1