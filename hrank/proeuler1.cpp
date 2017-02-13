#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long int sum=0,n;
	scanf("%d",&t);

	while(t--) 
	{
		scanf("%lld",&n);
		sum=0;
	    for(int i=1;i<n;i++)
	    {
	    	if(i%3 ==0 || i%5==0)
	    		sum=sum+i;
	    }

	    cout<<sum<<endl;
	}

	return 0;
}