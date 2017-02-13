#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cmath>
#include<cassert>
 
using namespace std;
 
#define all(a)                      a.begin(),a.end()
#define pb                          push_back
#define sz(a)                       sizeof(a)
#define mp                          make_pair
#define fir                         first
#define sec                         second
#define ll                          long long
#define pii                         pair<int,int>
#define sd(z)                       scanf("%d",&z);
#define pd(z)                       printf("%d",z);
#define pdn(z)                      printf("%d\n",z);
 
#define mod 1000000007
 
int main()
{
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;
 
    int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499};
 
    int a[100023],look[100023][500],count,temp;
    memset(look, 0, sz(look));
 
    look[2][2]=1;
    for(int i=3;i<=100000;i++)
    {
        for(int j=0;primes[j]<=i&&j<95;j++)
        {
            if(i%primes[j]==0)
            {
                look[i][primes[j]]=1;
                for(int k=2;k<=i;k++)
                    look[i][k] += look[i/primes[j]][k];
 
                break;
            }
        }
    }
 
    int ans;
    bool vis[100023];
 
    while(t--)
    {
        ans=1;
        memset(vis, false, sz(vis));
 
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
 
        for(int i=1;i<=n;i++)
        {
            count=0;
            temp=i;
            while(vis[temp]==false)
            {
                vis[temp]=true;
                temp=a[temp];
                count++;
            }
 
            if(ans==1)
                ans=count;
            else
            {
                temp=1;
                for(int j=0;primes[j]<=min(ans,count);j++)
                {
                    temp = (temp * (int)pow(primes[j], max(look[ans][primes[j]],look[count][primes[j]])))%mod;
                }
                ans = temp;
            }
        }
 
        cout<<ans%mod<<"\n";
    }
    return 0;
}