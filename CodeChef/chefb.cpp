#include <vector>
#include <iostream>
#include <cmath>
#include <memory.h>
 
using namespace std;
#define FOR(i,a)    for(int i = 0;i < a;i++)

#define MAX 1000001
bool primes[1000001];
int raise[78500];

vector<int>v;

void gen_primes() 
{ 
 int i,j; 
 for(i=0;i<MAX;i++) primes[i] = true;
 primes[0]=false;
 primes[1]=false;
 for(i=2;i<=(int)sqrt(MAX);i++) 
 {
  if (primes[i]) 
  {
   for(j=i;j*i<MAX;j++) primes[i*j] = false;
  } 
 }
 FOR(i,MAX)
 {
  if(primes[i]==true&&i!=0&&i!=1) 	
  v.push_back(i); 	
 }
} 

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,ar;
 int ma;
 long long t;
 cin>>t;
 while(t--)
{
 cin>>n;
 memset(raise,0,sizeof(raise));
 FOR(i,n)
 {
  cin>>ar;
  int j=0;
  while(v[j]<=(ar))
  {
   ma=0;	
   if(ar%v[j]==0 && v[j]!=0)
   {
   	while(ar%v[j]==0)
   	{
    ar/=v[j];
    ma+=1;
    }
   }
   if(ma>raise[j])
   {
    raise[j]=ma;
   }
   j++;
  }
 }
 long sum=0;
 FOR(i,78500)
 {
  sum+=raise[i];
 }
 cout<<sum<<endl;
}
 return 0;
}