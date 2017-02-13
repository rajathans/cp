#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
	ios_base::sync_with_stdio(false);
	int t,len;
	string str;
	long long int num = 1,i;

	cin>>t;
	while(t--)
	{
		cin>>str;
		num = 1;
		len = str.length();
		for(i = 0 ; i < len ; i++)
		{
			if(i % 2 == 0)
			{
				if(str[i] == 'l')
					num=(2*(num)) % MOD;
				else if(str[i] == 'r')
					num=(2*(num)) % MOD + 2;
			}
			else
			{
				if(str[i] == 'l')
					num=(2*(num)) % MOD - 1;
				else 
					num=(2*(num)) % MOD + 1;
			}

		}
		
		cout<<num%MOD<<endl;
	}
	return 0;
}