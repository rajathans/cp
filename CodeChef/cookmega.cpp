#include <bits/stdc++.h>

using namespace std;
 long long int arr[100001];
 long long int gcd(long long int a,long long int b) {
  if (b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}
int main(){
    long long int n,i,arrl,v,x,t;
    cin>>t;
    while(t--){
            x=0;
    cin>>n;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==0||n==1){
        cout<<-1<<endl;
    }
    else{
            v=arr[0];
           for(i=1;i<n;i++){
            v=gcd(v,arr[i]);
            if(v==1){
                x++;
                v=arr[i];
             }
           }
            if(x==0){
                cout<<-1<<endl;
            }
            else{
                cout<<x+1<<endl;
            }
        }
    }
    return 0;
}