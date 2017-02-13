#include <bits/stdc++.h>
using namespace std;

#ifndef PI
#define PI 3.14159265
#endif

int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		double s,c,k;
		cin>>s>>c>>k;

		double result;

		for(int i=0;i<s-1;i++)
		{
			result = asin(pow(2,i)) * 180.0 / PI;
			cout<<"The arc sine of "<<pow(2,i)<<" is "<<result<<" degrees"<<endl;
		}


	}

	return 0;
}

