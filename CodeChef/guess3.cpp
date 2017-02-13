#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	long long m = 0,n = 0,a = 0,t;
	cin>>t;

	while(t--)
	{
	    a = 0;
	    cin>>n>>m;

		if(m%2 == 0 || n%2 == 0)
			cout<<"1/2"<<endl;

		else if(m%2 != 0 && n%2 != 0)
        {
            a = (m*n - 1)/2;
			cout<<a<<"/"<<((2*a)+1)<<endl;
        }
	}

	return 0;
}
