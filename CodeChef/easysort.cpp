#include <bits/stdc++.h>
using namespace std;

int main() 
{
		long long int n;
		cin>>n;

		vector<long long int> num(n);
		for(long long int i=0;i<n;i++)
			cin>>num[i];

		sort(num.begin(), num.end());

		for(long long int i=0;i<n;i++)
			cout<<num[i]<<endl;

		return 0;
}
