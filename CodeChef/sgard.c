#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

typedef long long LL;

const int maxn = 200000;
const LL Mod = 1000000007;

int T,N;
int sp,a[maxn],b[maxn];
int tot,prime[maxn],d[maxn];
bool check[maxn],p[maxn];
LL ans;

void get_prime() {
    int w = 1000;
    for (int i = 2;i <= w; i++) 
    {
        if (!check[i]) 
        	{ 
        		tot++; 
        		prime[tot] = i; 
        	}
        
        for (int j = 1;j <= tot; j++) 
        {
            if (i*prime[j] > w) 
            	break;
            check[i*prime[j]] = true;
            if (i%prime[j] == 0) 
            	break;
        }

    }
}

LL Pow(LL x,LL y) 
{
    LL res = 1,g = x;
    while (y) 
    {
        if (y&1) 
        	res = res*g%Mod;
        g = g*g%Mod; 
        y >>= 1;
    }
    return res;
}

int main() 
{
	ios_base::sync_with_stdio(false);
    scanf("%d",&T); 
    tot = 0; 
    get_prime();
    for (int kase = 1;kase <= T; kase++) 
    {
        scanf("%d",&N);
        
        memset(d,0,sizeof(d)); sp = 0;
        memset(p,0,sizeof(p));
        
        for (int i = 1;i <= N; i++) 
        	scanf("%d",&a[i]);
        
        for (int i = 1;i <= N; i++) 
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
        
        for (int i = 1;i <= sp; i++) 
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
        for (int i = 1;i <= maxn; i++) 
        {
            if (d[i])
                ans = ans*Pow((LL)(i),(LL)(d[i]))%Mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}