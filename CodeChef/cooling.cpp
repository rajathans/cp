#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,count = 0,n,w,l;
	vector<int> pieW;
	vector<int> rackW;
	cin>>t;

	while(t--) 
	{
		count = 0;
		m = 0;
		l = 0;

	    cin>>n;

	    pieW.resize(n);
	    rackW.resize(n);

	    for(int i = 0; i < n; i++)
	    {
	    	cin>>pieW[i];
	    }

	    for (int i = 0; i < n; i++)
	    {
	    	cin>>rackW[i];
	    }

	    sort(pieW.begin(), pieW.end());
	    sort(rackW.begin(), rackW.end());

	    while(m<n)
	    {
	    	if(pieW[m] < rackW[m])
	    	{
	    		m++;
	    	}
	    	
	    	else
	    	{
	    		m++;
	    		l++;
	    	}

	    }

		cout<<count<<endl;
	}

	return 0;
}