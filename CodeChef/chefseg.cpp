#include <bits/stdc++.h>
using namespace std;

#ifndef prec
#define prec 20
#endif

int main()
{
	long int t;
	cin>>t;

	while(t--)
	{
		long double x, k;
		long double i;
		cin>>x>>k;
		
		for(i=1;i<=k;)
		{
			i=i*2;
			x=x/2;
		}

		i=i/2;
		x=x*2;

		long double ans = (k-i)*x + x/2;
		cout.precision(prec);
		cout<<ans<<endl;
	}
	return 0;
}