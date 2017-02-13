#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
    	ans *= i;
    return ans;
}


int main()
{
	long long int t;
	cin>>t;

	while(t--)
	{
		vector<long long int> p;
		long long int n,m;
		cin>>n>>m;
		p.resize(n);
		long long int ans = 0;

		for(int i=0;i<n;i++)
			cin>>p[i];

		for(int i=0;i<n;i++)
		{
			 
		}

		cout<<ans<<endl;
	}

	return 0;
}
