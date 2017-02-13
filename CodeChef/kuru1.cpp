#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int count=0;
		int n;
		cin>>n;
		int a[n],b[1005];

		for(int i=0;i<1005;i++)
			b[i]=0;

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}

		for(int i=0;i<1005;i++)
		{
			if(b[i]>1)
				count++;
		}

		cout<<count<<endl;

	}
	return 0;
}