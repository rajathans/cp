#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--) 
	{
		long long int n,k;
	    cin>>n>>k;

	    long long int time_stone[n],profit[n];

	    for (int i = 0; i < n; i++)
	    	cin>>time_stone[i];
	    for (int i = 0; i < n; i++)
	    	cin>>profit[i];

	    for (int i=0;i<n;i++)
	    {
	    	int a=0;
	    	while(time_stone[i]*a <= k)
	    		a++;
	    	
	    	a=a-1;
	    	profit[i]*=a;
	    }

	    cout<<*max_element(profit, profit+n)<<endl;
	}

	return 0;
}