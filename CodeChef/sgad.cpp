#include<bits/stdc++.h>
using namespace std;

long long int fastPow(long long int x,long long int y) 
{
    long long int res = 1,g = x;
    while (y) 
    {
        if (y&1) 
        	res = res*g%1000000007;
        g = g*g%1000000007; 
        y >>= 1;
    }
    return res;
}

int main() 
{
	int i,T,N,sp,a[200000],b[200000],tot,prime[200000],d[200000];
	bool check[200000],p[200000];
	long long int ans;

	ios_base::sync_with_stdio(false);
    scanf("%d",&T); 
    tot = 0; 
    
    for (int i = 2;i <= 1000; i++) //primes < 1000
    {
        if (!check[i]) 
        	{ 
        		tot++; 
        		prime[tot] = i; 
        	}
        
        for (int j = 1;j <= tot; j++) 
        {
            if (i*prime[j] > 1000) 
            	break;
            check[i*prime[j]] = true;
            if (i%prime[j] == 0) 
            	break;
        }

    }

	while(T--)
    {
        scanf("%d",&N);
        
        memset(d,0,sizeof(d)); 
        sp = 0;
        memset(p,0,sizeof(p));
        
        for (i = 1;i <= N; i++) 
        	scanf("%d",&a[i]);
        
        for (i = 1;i <= N; i++) 
        {
            if (!p[i]) 
            {
                int t = i; 
                sp++; 
                b[sp] = 0;
                while (!p[t]) 
                {
                    p[t] = true; 
                    b[sp]++;
                    t = a[t];
                }
            }
        }
        
        for (i = 1;i <= sp; i++) 
        {
            int t,w = b[i];
            for (int j = 1;j <= tot; j++) 
            {
                if (prime[j] > w) 
                	break;
                t = 0;
                while (w % prime[j] == 0) 
                {
                    t++; 
                    w /= prime[j];
                }
                d[prime[j]] = max(d[prime[j]],t);
            }
            if (w > 1) 
            	d[w] = max(d[w],1);
        }

        ans = 1;
        for (i = 1;i <= 200000; i++) 
        {
            if (d[i])
                ans = ans*fastPow((long long int)(i),(long long int)(d[i]))%1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}