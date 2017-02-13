#include <bits/stdc++.h>
using namespace std;

int xorr(int a,int b)
{
	if(a==b)
		return 0;
	else
		return 1;
}

int main()
{
	int t;
	cin>>t;

	while(t--) 
	{
		string str;
	    cin>>str;

	    cout<<"string is "<<str<<endl;

	    vector <int> ans;
	    ans.resize(str.length());
	    ans[0] = str[0];

	    for (int i = 1; i < ans.size(); i++)
	    {
	    	ans[i] = xorr(str[i-1],str[i]);
	    	cout<<ans[i]<<" ";
	    }

	    cout<<endl;

	    for(int i=0;i<ans.size();i++)
	    	cout<<ans[i];

	    cout<<endl;

	}

	return 0;
}