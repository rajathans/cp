#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		double p,s;
		cin>>p>>s;

		double root = p*p - 24*s;
		root = sqrt(root);

		double vol = 2*p*p - 24*s - 2*p*root;
		vol *= p + 2*root;
		vol /= 1728;
		printf("%0.2lf\n",vol);
	}

	return 0;
}

