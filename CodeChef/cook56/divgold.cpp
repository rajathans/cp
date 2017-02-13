#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;

		string st;
		int min = str[0];
		int pos = 0;

		for (int i = 1; i < str.length(); ++i)
		{
			if (str[i]=<min)
			  {
			  	min = str[i];
			  	pos = i;
			  }
		}

		cout<<min<<char(min)<<endl;

		for (int i = pos+1; i >=0; i++)
		{
			if (str[i] < min)
			{
				pos = 
			}
		}





	}

	return 0;
}

