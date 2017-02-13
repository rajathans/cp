#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int flag=0;
	cin>>t;
	string str;

	while(t--) 
	{
		int n;
		cin>>n;

		int a[n];
		int b[n];

		for (int i = 0; i < n; i++)
		{
			cin>>a[i]>>b[i];
		}

		int p;
		cin>>p;

		int par[p];
		int count[p];

		for (int i = 0; i < n; i++)
		{
			for(int k=0;k<p;k++)
			{
				if(a[i]<=par[k] && a[i+1]>=par[k])
					count[k]++;
			}
			i++;
		}

		for (int i = 0; i < p; ++i)
		{
			cout<<count[i];
		}
	}

	return 0;
}
