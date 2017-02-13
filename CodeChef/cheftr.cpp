#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--) 
	{
		long int n,k;
	    cin>>n>>k;
	    cout<<(n*(n-1)*(n-2)/6)-(k*(k-1)*(k-2)/6)<<endl;
	}

	return 0;
}