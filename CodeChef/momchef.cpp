#include <iostream>
#include <cstdio>
#include <vector>

#define pc(x) putchar_unlocked(x);
#define gc getchar_unlocked
using namespace std;
 
void scanint(int &x) // int integer
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
long long ans(vector<bool> v, int n){
 long long candidate = 1;
   for(int i=1; i <= n; i++){
        if(v[i]){
          if( i > candidate ) return candidate;
          else candidate = candidate + i;
        }
   }
 return candidate;
}
 
int main()
{
  int t;
  cin >> t;
  while(t--) 
  {
    vector<bool> perms;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i <= n; i++)
      perms.push_back(1);
 
    for(int i = 0; i < k; i++)
    {
      int a;
      cin >> a;
      perms[a] = 0;
    }
      
    long long z;
 
    if(k != 0) 
    {
      long long candidate = 1;
      for(int i=1; i <= n; i++)
      {
        if(v[i])
        {
          if( i > candidate ) 
            return candidate;
          else candidate = candidate + i;
        }
      }
      z = candidate;
    else 
      z = n*(n-1)/2 + 1;
    
    if( z % 2 == 0) 
      cout <<"Mom"<<endl;
     
    else 
      cout << "Chef"<<endl;
  }
  return 0;
}
