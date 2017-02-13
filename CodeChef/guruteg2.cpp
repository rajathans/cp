#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	while(t--) 
	{
		string str;
	    cin>>str;

	    char temp;
	    string refresh = str;
	    bool flag = 0;

	    if (str == string(str.rbegin(), str.rend())) 
	    {
    		flag = 1;
    		goto h;
		}

	    for(int i=0;i<str.length();i++)
	    {
	    	for(int j=i+1;j<str.length();j++)
	    	{
	    		str = refresh;
	    		temp = str[i];
	    		str[i] = str[j];
	    		str[j] = temp;


	    		if (str == string(str.rbegin(), str.rend())) 
	    		{
    				flag = 1;
    				goto h;
				}
	    	}
	    }

	    h:
	    if(flag==0)
	    	cout<<"no"<<endl;
	    else
	    	cout<<"yes"<<endl;
	}

	return 0;
}