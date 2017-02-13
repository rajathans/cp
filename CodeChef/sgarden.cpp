#include<bits/stdc++.h>
using namespace std;

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int main()
{
	ios_base::sync_with_stdio(false);
	long int t,n,count,i;
	vector<int> v1;
	vector<int> v2;
	cin>>t;

	while(t--)
	{
		cin>>n;
		v1.resize(n);
		v2.resize(n);

		for(i=0;i<n;i++)
		{
			cin>>v1[i];
			v1[i]=v2[i];
		}

		sort(v1.begin(),v1.end(),myobject);

		for(i=0;i<n;i++)
		{
			cout<<v1[i];
		}

	}
	return 0;
}
