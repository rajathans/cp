#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	long long int t;
	cin>>t;

	while(t--)
	{
		vector<long long int> a;
		long long int s=0,n;
		long long int temp;
		cin>>n;
		a.resize(n);

		for(long long int i=0;i<n;i++)
			cin>>a[i];
		
		s = accumulate(a.begin(),a.end(),0);
		long long int zero = count(a.begin(), a.end(),0);

		if(s < 100)
			cout<<"NO"<<endl;
		else if(s == 100)
			cout<<"YES"<<endl;
		else
		{
			temp = (s - 100)*2;
			if(temp <= n - zero)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
