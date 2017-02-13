#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--) 
	{
		int n;
	    cin>>n;
	    int x = (5*n*n) + 4;
	    int y = (5*n*n) - 4;
	    
	    if(sqrt(x)==(int(sqrt(x) || sqrt(y)==(int(sqrt(y))))))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}