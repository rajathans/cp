#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;

	int count=0;

	vector <int> a;
	a.resize(n);

	for(int i=0;i<n;i++)
		cin>>a[i];


	sort(a.begin(), a.end());

	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		{
			a[i]+=1;
			count++;
		}
	}

	cout<<count<<endl;

	return 0;
}

