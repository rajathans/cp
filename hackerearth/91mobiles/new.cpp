#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int flag=0;
	cin>>t;
	string str;

	while(t--) 
	{
		cin>>str;
		int i=0;
		string str2;

		str2=str;

		while(i<str.length()) 
		{

		    str.erase(i);
			
			for (string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); rit++)
    			cout<<*rit;
		    if(str.compare(str2)==0)
		    {
		    	flag=1;
		    	goto l;
		    }
			
			else
			{
				str=str2;
			}

			i++;		    
		}

		l:

		if(flag=1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}