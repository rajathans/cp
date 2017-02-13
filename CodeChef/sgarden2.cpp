#include <bits/stdc++.h>
#define C 1000000007

using namespace std;
 
int A[100001];
bool B[100001];

long long GCD(long long a, long long b)
{
    long long gcd;
    while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}

long long lcm(long long a, long long b)
{
 
    long long lowcomu ;
    lowcomu = (a*b) / (GCD(a,b));
    return lowcomu;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false); 
    int t,n,start,i,q;
    long long l, loop;
    
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        for(i=0;i<=n;i++)
            B[i] = false;
 
        for(i=1;i<=n;i++)
            cin>>A[i];
 
        start = 1;
        i = 1;
        loop = 0;
        l = 1;
        q =1;
 
 
        for(;;)
        {
            B[i] = true;
 
            if(A[i]==start)
            {
                loop++;
 
                l = lcm(l,loop);
                l= l%C;
 
                while(q<=n)
                    if(B[q]==true)
                        q++;
                    else
                        break;
 
                start = q;
 
                if(start==n+1)
                    break;
 
                else
                    i = start;
 
                loop = 0;
 
 
            }
 
            else
            {
                loop++;
                B[i] = true;
                i = A[i];
            }
 
        }
 
        cout<<l%C<<"\n";
 
    }
 
    return 0;
}