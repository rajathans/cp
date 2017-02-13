#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main() 
{
  long long int t;
  cin>>t;
  while(t--)
  {
    vector <int> a;
    long long int n,ans,temp,q,L,R;
    cin>>n>>q;

    a.resize(n);

    for(long long int i = 0; i<n; i++)
      cin>>a[i];

    while(q--)
    {
      cin>>L>>R;
      temp=0;

      for(long long int k=0;k<n;k++)
      {
        if(k+1<L||k+1>R)
        {
          if(temp == 0)
          {
            ans = a[k];
            continue;
          }
          ans = gcd(a[k],ans);
        }
        temp++;
      }
      cout<<ans<<endl;

    }
  }
  return 0;
}
 