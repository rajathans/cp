#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n,t;
   ios_base::sync_with_stdio(false);
   cin>>t;
   while(t--)
   {
   cin>>n;
   if(n%2==0)
   cout<<n<<"\n";
   else
    cout<<(n-1)<<"\n";
   }
   return 0;
}
