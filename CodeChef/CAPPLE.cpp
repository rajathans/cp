#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX 100000
#endif

int main()
{
	int t;
	cin>>t;

	while(t--) 
	{
		int n;
		cin>>n;

		int sum =0;

	    int vec[n];
	    int vec_sum[MAX];

	    for (int i = 1; i <= MAX; i++) //init
	    	vec_sum[i]=0;

	    for (int i = 0; i < n; i++)
	    {
	    	cin>>vec[i];
	    	vec_sum[vec[i]]+=1;
	    }

	    for (int i = 1; i <= MAX; i++)
	    {
	    	if(vec_sum[i]!=0)
	    		sum=sum+1;
	    }

	   	//cout<<accumulate(vec_sum.begin(), vec_sum.end(),0)<<endl;
	   	cout<<sum<<endl;
	   	
	}

	return 0;
}