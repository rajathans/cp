#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long int sum,a,b,evensum;
	long long int n;
	cin>>t;

	while(t--) 
	{
		a=0;
		b=1;
		sum=0;
		evensum=0;

	    cin>>n;

	    for(int i=2;i<n;i++)
    	{
        	sum = a+b;
        	a = b;
        	b = sum;
        	
       		if(b%2==0)
       		{
           		evensum+=b;
           	}
		}

		cout<<evensum<<endl;
	}
}