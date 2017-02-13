#include <bits/stdc++.h>
using namespace std;

long long int factorial(int x) 
{
	int ans= 1;
	for(int i=1;i<=x;i++)
   		ans = ans*i;
	return ans;
}

int main()
{
	int t,n;
	char str[200];
	cin>>t;

	while(t--)
	{
		cin>>n;
		printf("%lld",factorial(n));
	}

	return 0;
}