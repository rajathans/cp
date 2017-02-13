n,m=raw_input().split()
n=int(n)
m=int(m)
 
p=[int(i) for i in raw_input().split()]
 
dp=[]	
dp.append(int(0))
dp.append(int(1))
for i in range(2,m):
    dp.append(int(((dp[i-1]*i)%m)))
 
ans=0
 
for i in range(0,n):
    if (p[i]+1)<m:
        ans=(ans+dp[p[i]+1]+m-1)%m
 
        ans=(ans+(p[i]*(p[i]+1)*(p[i]+1)/2)%m)%m
 
print(ans)