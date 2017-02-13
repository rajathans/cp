#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
 
int main()
{
    int t;
    int mx,n,m,s,p,cnt=0;
    int i,j,k,l;
    int a[401],b[401];
    scanf("%d",&t);

    while(t--)
    {
        cnt=0;
        scanf("%d%d",&m,&n);

        for(i = 0;i <n;i++) 
            scanf("%d",&a[i]);

        for(j = 0;j<m;j++)
            b[j]=-1;
        
        for(i = 0;i<n;i++)
        {
            for(k=0;k<m;k++)
                if(a[i]==b[k]) 
                    goto x;
 
            for(j=0;j<m;j++)
            {
                if(b[j]==-1) 
                {
                    b[j]=a[i];
                    cnt++;
                    goto x;
                }
            }
 
            if(j==m)
            {
            	l=i+1;
                mx=0;

                for(j=0;j<m;j++)
                {
                    for(s=l;s<n;s++)
                    {
                        if(b[j]==a[s])
                        {
                            if(s>mx)
                            {
                                mx=s;
                                p=j;
                            }
                            break;
                        }
                    }
                    if(s==n)
                    {
                        mx=s;
                        p=j;
                    }
        	    }
            }

            b[p]=a[i];
            cnt++;
            x: ;
        }

       cout<<cnt%MOD<<endl;
    }

    return 0;
}