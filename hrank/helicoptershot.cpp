#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,count=0;
	cin>>t;

	while(t--) 
	{
		count=0;
	    cin>>n;
	    if(n==5)
	    	cout<<"2"<<endl;
	    else
	    {
	    	while(n>0)
	    	{
	    		n-=6;
	    		count++;
	    	}

	    	cout<<count<<endl;
	    }
	}
	return 0;
}