#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,countDistinct,occurences,temp;
	vector<int> vec;
	vector<int> occ;
	cin>>t;
	while(t--) 
	{
		countDistinct = 0;
		occurences = 0;
	    cin>>n>>m;
	    vec.resize(m);
	    occ.resize(100);
	    
	    for(int i =0;i<m;i++)
	    {
	    	cin>>vec[i];
	    }

	    for(int i =1;i<m;i++)
	    {
	    	temp = vec[i];
	    	occ[i] = count(vec.begin(),vec.end(),temp);
	    }

	    sort(vec.begin(),vec.end());

	    for(int i=1;i<m;i++)
	    {
	    	if(vec[i] == vec[i-1])
	    		countDistinct++;
	    }

	    cout<<countDistinct;
	    /**if(countDistinct == m)
	    	cout<<m<<endl;**/

	    for(int i =0;i<m;i++)
	    {
	    	cout<<vec[i]<<" ";
	    }

	    cout<<endl;

	    for(int i =0;i<m;i++)
	    {
	    	cout<<occ[i]<<" ";
	    }
	}

	return 0;
}