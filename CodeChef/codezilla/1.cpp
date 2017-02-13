#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		if(k==0)
			cout<<n<<endl;

		else
		{
		vector <int> vec(n,0);
		int sum = 0;

		for(int i=1;i<=n;i++)
		{
			vec[i]=i;
			sum = sum + i;
		}

		bool ans = false;
		vector <int> vect;

		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(vec[i] + vec[j] == sum - k)
				{
					vect.push_back(i*j);
					ans = true;
				}
		}
		}

		if(ans==true)
			cout<<*min_element(vect.begin(), vect.end())<<endl;
		else
			cout<<"-1"<<endl;
	}
}

	return 0;
}
