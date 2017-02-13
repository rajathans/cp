#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,j,t,k1,k2;
    cin>>n>>m;
    t= n/m;
    j=t+n%m;
    if(n%m==0){
      k1 = t*(t-1)*(m)/2;  
    }else{
        k1=t*(t-1)*(m-1)/2+ j*(j-1)/2;
    }
 
    k2 = (n-m)*(n-m+1)/2;
    cout<<k1<<" "<<k2<<endl;
    return 0;
}
