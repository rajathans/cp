#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  long long int a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a,a+3);
  long long int sum;
 
  sum+=a[0];
  a[1]=a[1]-a[0];
  a[2]=a[2]-a[0];
 
  if(a[1]!=0 && a[2]!=0)
  {
    if((a[2]/2)<a[1])
      sum+=a[2]/2;
    else
      sum+=a[1];
  }
  cout<<sum<<endl;
  return 0;
}