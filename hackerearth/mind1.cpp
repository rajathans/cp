#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

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

unsigned int divisors(unsigned long int n)
{
	unsigned short int primes[10000];
	for(unsigned int i=0 ; i < 10000 && i <= n ; i++) primes[i]=0;
	
	unsigned short int how_many=1;
	for(unsigned long int i=2 ; i < 10000 && i <= n ; i++)		
	{
		while(!(n%i))
		{
			n /= i;
			
			primes[i]++;
		}
		
		if(primes[i]) how_many *= (primes[i]+1);
	}
	
	return how_many;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	scanint(t);

	while(t--)
	{
		int ans = 0;
	 	int L,R;
	 	scanint(L);
	 	scanint(R);

	 	for(int i=L;i<=R;i++)
	 	{
	 		if(divisors(i)%2!=0)
	 			ans = ans +1;
	 	}

	 	cout<<ans<<endl;
	}
	return 0;
}