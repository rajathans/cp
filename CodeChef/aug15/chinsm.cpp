#include <iostream>
   using namespace std;
 
    int main() 
     {
     int n,k;
    cin>>n>>k;
     int a[n+1],i,j,ans=0;
     for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if(a[i]%a[j]==k){
            ans=ans+(n-j+1);
 break;
        }
    }
 }
    //if(k==0)ans=ans+n;
    cout<<k<<n<<i<<a<<j<<endl;
    cout<<n*(n+1)/2-ans<<endl;
// your code goes here
   return 0;
   } 