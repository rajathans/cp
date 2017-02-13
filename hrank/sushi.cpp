#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> dish;
	vector<int> mycount;
	int n;
	cin>>n;
	dish.resize(n);
	mycount.resize(n);

	for (int i = 1; i <= n; i++)
		cin>>dish[i];

	sort(dish.begin(), dish.end());
	for (int i = 1; i <= n; i++)
	{
		if(i!=1)
		{
			if(dish[i]==dish[i-1])
				continue;
			else
				mycount[i] = count(dish.begin(), dish.end(), i);
		}
		else
			mycount[i] = count(dish.begin(), dish.end(), i);

	}

	for (int i = 1; i <=n; i++)
		cout<<mycount[i]<<endl;

	return 0;
}