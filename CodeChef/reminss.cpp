#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	long int a,b;
	while(t--)
	{
		cin>>a>>b;
		cout<<max(a,b)<<" "<<(a+b)<<endl;
	}
    return 0;
}
