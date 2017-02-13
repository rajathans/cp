#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,C,n;
	cin>>t;
	vector <int> item;
	int tempval;

	while(t--)
	{
		tempval = 0;
		cin>>C;
		cin>>n;
		item.resize(n);

		for(int i=1;i<=n;i++)
		{
			cin>>item[i];
		}

		sort(item.begin(), item.end());

		for(int i=1;i<=n;i++)
		{
			if(tempval == C)
				exit(0);
			
			else if(item[i]==C)
			{
				cout<<i<<endl;
				exit(0);
			}

			else if(item[i]<C)
			{
				if(tempval + item[i] == C || tempval + item[i] < C)
				{
					cout<<i<<endl;
				}
			}
		}

	}

	return 0;
}