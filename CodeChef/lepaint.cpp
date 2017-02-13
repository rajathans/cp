#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    int T,n,c,k,Li[100],Ri[100];
    double f[100][110],ans;
    
    scanf("%d",&T);
    
    while(T--)    
    {
        scanf("%d%d%d",&n,&c,&k);
        memset(f,0,sizeof(f));
        
        for (int i = 1;i <= k; i++) 
            scanf("%d%d",&Li[i],&Ri[i]);
        
        f[0][1] = 1;
        
        int i=1;
        while(i<= k) 
        {
            for (int j = 0;j < c; j++)
            {
                for (int p = 0;p < c; p++)
                    f[i][j*p%c] += 0.5*f[i-1][j]*1.0/c;
                f[i][j] += 0.5*f[i-1][j];
            }

            i++;
        }

        ans = 0;
        
        i=1;
        while(i <= n) 
        {
            int tot = 0;
            for (int j = 1;j <= k; j++)
                if (Li[j] <= i && i <= Ri[j]) 
                {
                    tot++;
                }
            for (int j = 0;j < c; j++)
                ans += j*f[tot][j];

            i++;
        }
        printf("%.9lf\n",ans);
    }
    return 0;
}