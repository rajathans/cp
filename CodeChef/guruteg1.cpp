#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	while(t--) 
	{
		double o,r,s;
		cin>>o>>r>>s;
		double ans = (o*r + s)/(o+1); 
		cout<<fixed;
    	cout<<setprecision(2);
		cout<<ans<<endl;
	}

	return 0;
}
