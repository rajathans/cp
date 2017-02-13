#include <stdio.h>
using namespace std;

#ifndef MAX
#define MAX 10000002
#endif

int main() 
{
	long long int n,m;
    cin>>n>>m;
    vector <long long int> p(m+1,0);
    vector <long long int> g(m+1,0);

    p[0] = 1;
    p[1] = 1;

    for(int i = 2; i < m; i++)
        p[i] = (p[i-1] * i)%m;

    for(int i = 1; i < m; i++)
        g[i] = (g[i-1] + p[i] * i)%m;

    long long ans = 0;

    for(int i = 0; i < n; i++)
    {
        long long x;
        scanf("%lld", &x);
 	    long long an = g[min(x, m - 1)];
    	long long sum = m * (m + 1) / 2;
    	sum %= m;
    	long long t = ((x / m) * sum)%m;
    	t = (t + (x % m) * (x % m + 1) / 2)%m;
    	t = (t*(x%m))%m;
        ans = (ans + (an + t)%m)%m;
    }
    cout << ans << endl;
    return 0;
}