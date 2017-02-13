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

		int oldlen = str.length();

		str.erase(str.begin(), str.begin()+4);
		cout<<str<<endl;

		int len = 0;
		for(int k=0;k<str.length();k++)
		{

			if(str[k]=='.')
				break;	

			if(str[k] == 'a' || str[k] == 'e' || str[k] == 'i' || str[k] == 'o' || str[k] == 'u')
			{
				len++;
			}
		}

		int newlen = 0;
		newlen = oldlen - len + 1;
		cout<<(newlen-3)/oldlen<<endl;
	}

	return 0;
}