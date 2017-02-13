#include <bits/stdc++.h>
using namespace std;

#ifndef mod
#define mod 1000000007
#endif

long long strength(long long a , long long b ,long long day)
{
	if(day==2)
	{
		return b;
	}
	else if(day==1)return 2;
	else
	{
	long long d = b%mod + 2*a%mod ;
	return strength(b,d,day-1);
	}
	return 0;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	long long n;
	scanf("%d",&t);
	while ( t-- )
	{
		scanf("%lld",&n);
		cout<<strength(2,7,n)%mod<<endl;
	}
	return 0;
}
 
