#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    int n,q;
    cin>>n>>q;

    vector <int> a;
    a.resize(n);
 
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<q;j++)
    {
            int c,x,y,v;
            cin>>c;

            if(c==1 || c==2 || c==3)
                cin>>x>>y>>v;

            if(c==4)
                cin>>x>>y;

            int sum=0;


            if(c==1)
            {
                for (int i = x-1; i <= y-1; i++)
                {
                    a[i]+=v;
                    a[i]%=1000000007;
                }
            }
            if(c==2)
            {
                for (int i = (x-1); i <= (y-1); i++)
                {
                    a[i]*=v;
                    a[i]%=1000000007;
                }
            }
            if(c==3)
            {
                for (int i = x-1; i <= y-1; i++)
                    a[i]=v;
            }
            if(c==4)
            {
                for (int i = x-1; i <= y-1; i++)
                {
                    sum+=a[i];
                    sum%=1000000007;
                }
                cout<<sum<<"\n";
                sum=0;
            }
    }
return 0;
}