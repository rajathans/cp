#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector <int> pile;
	int sum,n;

	while(t--)
	{
		cin>>n;
		sum = 0;
		pile.resize(n);

		for(int i=0;i<n;i++)
		{
			cin>>pile[i];
		}

		sort(pile.begin(), pile.end(), greater<int>());

		for(int i=0;i<n;i++)
		{
			if(i%2 == 0 || i==0)
				sum+=pile[i];
		}

		cout<<sum<<endl;

	}

	return 0;
}