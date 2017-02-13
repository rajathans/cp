#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	string btn[12] = {" ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz","*"," ","#"};
	string str;

	while(t--)
	{
		cin>>str;
		for (int i = 0; i < str.length(); i++)
		{
			int press = 0;
			if ( i != str.length()-1)
			{
				if (str[i] == '1')
				{
					press = 1;
				}
			}

		}
	}

	return 0;
}

