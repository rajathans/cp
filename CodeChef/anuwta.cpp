#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long long t,n,val;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
			cout<<(((n/2)*(n+1))+n)<<endl;
		else
			cout<<((((n+1)/2)*n)+n)<<endl;
	}
return 0;
}