#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    int n,m,T,cnt;
    int tot,p[2000],ans[1002][1002],d[2000];
    bool b[2000],flag;
    scanf("%d",&T);

    while(T--)    
    {
        scanf("%d%d",&n,&m);
        memset(b,0,sizeof(b)); 

        flag = true; 
        cnt = 1;

        for (int i = 0;i < n; i++) 
            scanf("%d",&p[i]);
        for (int i = 0;i < n; i++) 
        {
            if (!b[i]) 
            {
                int t = i; 
                tot = 0;

                while (!b[t]) 
                {
                    tot++; 
                    d[tot] = t;
                    b[t] = true; 
                    t = p[t];
                }

                if (tot <= 2) 
                {
                    flag = false; break; 
                }
                
                
            }
        }

        for (int i = 0;i < n; i++) 
        {
            int w = 0;
            for (int j = 1;j <= m; j++) 
            {
                if (ans[i][j] < ans[p[i]][j]) 
                    w += j-1;
                else 
                    w += j;
            }
            if (w <= m*m/2) 
                { 
                    flag = false; 
                    break;
                }
        }
        if (!flag) 
            printf("\n");
        else 
        {
        for (int i = 0;i < n; i++)
            for (int j = 1;j <= m; j++) 
            {
                printf("%d",ans[i][j]);
                if (j != m) 
                    printf(" "); 
                else 
                    printf("\n");
            }
        }
    }
    return 0;
}