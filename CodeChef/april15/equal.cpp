#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	long long int t;
	scanf("%lld",&t);

	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		vector<long long int> a;
		a.resize(n);
		vector<long long int> x;
		x.resize(n);

		for (long long int i = 0; i < n; i++)
			scanf("%lld",&a[i]);
		
		int sum = accumulate(a.begin(), a.end(),0);
		sum = sum / (n-1);
		for (long long int i = 0; i < n; i++)
			x[i] = sum - a[i];

		for (long long int i = 0; i < n; i++)
		{
			if (i<n-1)
				printf("%lld ",x[i]);
			else
				printf("%lld",x[i]);
		}
		printf("\n");
	}

	return 0;
}

