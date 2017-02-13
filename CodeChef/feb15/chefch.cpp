//rajathans9
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		string str;
		char expect;
		int ans = 0;
		cin>>str;
		
		for(int i = 0; i < str.length(); i++)
		{
			if(i==0)
			{
				if(str[0] == '+')
					expect = '-';
				else
					expect = '+';
				str[0] = '0';
			}
			else
			{
				if(str[i] != expect)
					str[i]='1';
				else
					str[i]='0';

				if(expect == '+')
					expect = '-';
				else
					expect = '+';
			}
		}
		
		for(int i = 0; i<str.length(); i++)
		{
			if(str[i] == '1')
				ans++;
		}

		cout<<ans<<endl;
	}
	return 0;
}