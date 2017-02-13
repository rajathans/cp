#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX 100005
#endif

int ar[MAX],lg[MAX], M[30][MAX], qs[30];

int main()
{
	ios_base::sync_with_stdio(false);
    int n, i, m, x, y;
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>ar[i];

    int j;
    qs[0] = 1;
    for(i=1;i<30;i++)
        qs[i] = qs[i - 1] << 1;
    lg[1] = 0;
    for(i=2;i<n+1;i++)
        lg[i] = lg[i >> 1] + 1;
    for(i=0;i<n;i++)
        M[0][i] = i;
    for(j = 1; qs[j] < n; ++j)
        for(i = 0; i + qs[j] <= n; ++i)
            M[j][i] = ar[M[j-1][i]] >= ar[M[j - 1][i + (qs[j - 1])]] ? M[j - 1][i] : M[j - 1][i + (qs[j - 1])];

    cin>>m>>x>>y;
    int ans = 0;
    while(m--)
    {
    	int k = lg[max(x,y) - min(x,y)];
    	int temp = ar[M[k][min(x,y)]] >= ar[M[k][max(x,y) - (qs[k]) + 1]] ? M[k][min(x,y)] : M[k][max(x,y) - (qs[k]) + 1];
        ans += ar[temp];
        x = x + 7;
        if(x>=n-1)x%=n-1;
        y = y + 11;
        if(y>=n)y%=n;
    }
    cout<<ans<<endl;
    return 0;
}