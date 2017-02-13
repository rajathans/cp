#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,n;
	vector <int> s1;
	vector <int> temp;
	cin>>k;

	while(k--) 
	{
		s1.clear();
		temp.clear();
		int maxi = 0;
	    cin>>n;
	    s1.resize(n,0);
	    for(int i=0;i<n;i++)
	    	cin>>s1[i];
	    sort(s1.begin(), s1.end());
	    /*for(int i=0;i<n;i++)
	    	cout<<s1[i]<<endl;*/
	    temp.push_back(s1[0]);
	    //cout<<"Pushed: "<<s1[0]<<endl;

	    for(int i=1;i<n;i++)
	    {
	    	if(s1[i]!=s1[i-1])
	    	{
	    		temp.push_back(s1[i]);
	    		//cout<<"Pushed: "<<s1[i]<<endl;
	    	}
	    }
	    //cout<<endl;
	    /*for(int i=0;i<temp.size();i++)
	    	cout<<temp[i]<<" ";
	    cout<<endl;*/
	    cout<<temp.size()<<endl;
	}

	return 0;
}