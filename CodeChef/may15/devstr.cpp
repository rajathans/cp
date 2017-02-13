#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,x;
    cin>>t;
    while(t--)
    {
        string s;
        vector <int> b;
        vector <int> s;
        cin>>n>>k;
        b.resize(n);
        s.resize(n);
        cin>>s;

        b[0]=s[0];
        c[n-1]=s[n-1];
        int y=0,x=0,q=0;

        if(k!=1)
        {
            for(i=1;i<n;i++)
            {
            if(s[i]==b[i-1])
            {
                ++x;
            }
            else
                x=0;
            if(x==k)
            {
                if((i==n-1)||(s[i]==s[i+1]))
                {b[i]=s[i]^1;}
                else
                {
                    if(b[i-1]!=b[i-2]&&i>1)
                    {
                        b[i]=s[i]^1;
                    }
                    else
                    {b[i-1]=s[i]^1;
                    b[i]=s[i];}
                }
                y++;
                x=0;
            }
            else
                b[i]=s[i];
            //cout<<b[i];
        }
 
 
 
 
         x=0;
       //Reverse order to find min of the two
        for(i=n-2;i>=0;i--)
        {
            if(s[i]==c[i+1])
            {
                ++x;
            }
            else
                x=0;
            if(x==k)
            {
                if((i==0)||(s[i]==s[i-1]))
                {c[i]=s[i]^1;
                x=0;}
                else
                {
                    if(c[i+1]!=c[i+2]&&i<n-2)
                    {
                        c[i]=s[i]^1;
                        x=0;
                    }
                    else
                    {c[i+1]=s[i]^1;
                    c[i]=s[i];
                    x=0;}
                }
                q++;
 
            }
            else
                c[i]=s[i];
            //cout<<b[i];
        }
 
        if(q<y)
            cout<<q<<endl<<c<<endl;
        else
        cout<<y<<endl<<b<<endl;
        memset(b,0,n);
        memset(c,0,n);
        }
 
 
 
 
 
 
 
 
        else
        {
            int m=0,v=0;
            for(i=0;i<n;i++)
            {
                if(i%2==0&&s[i]=='0')
                {
                    m++;
                }
                else if(i%2!=0&&s[i]=='0')
                    v++;
            }
            if(m>v)
            {
                cout<<v+(n+1)/2-m<<endl;
                for(i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        cout<<"0";
                    }
                    else if(i%2!=0)
                    {
                        cout<<"1";
                    }
                }
            }
            else
            {
                cout<<m+(n)/2-v<<endl;
                for(i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        cout<<"1";
                    }
                    else if(i%2!=0)
                    {
                        cout<<"0";
                    }
                }
 
            }
            cout<<endl;
        }
 
    }
    return 0;
}