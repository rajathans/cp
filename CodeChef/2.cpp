#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string str;
	vector <char> vec;
	cin>>t;

	while(t--) 
	{
		vec.clear();	
	    do
        {
            getline(cin,str);
        }while(str.empty());

	    for(int i=0;i<str.length();i++)
	    {
	    	if(!isdigit(str[i]) || isspace(str[i]))
	    	{
	    		vec.push_back(str[i]);
	    		//cout<<"Pushed : "<<str[i]<<endl;
	    	}
	    }

	    for(int i=0;i<vec.size();i++)
	    	cout<<vec[i];
	    cout<<endl;
	}

	return 0;

}