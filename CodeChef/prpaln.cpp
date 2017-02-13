#include <bits/stdc++.h>
using namespace std;

bool isPal(string str)
{
    if (str == string(str.rbegin(), str.rend()))
    	return true;
    else
    	return false;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int flag=0;
		string str;
		getline(cin,str);
		string str_temp;
		str_temp=str;
		int i=0;

		rewind:
		str=str_temp;

		while(i < str.length())
		{
			str.erase(i,1);
			if(isPal(str)==true)
			{
				flag=1;
				goto end;
			}

			else
			{
				i++;
				goto rewind;
			}

		}

		if(flag==0)
			cout<<"NO"<<endl;

		end:
		if(flag==1)
			cout<<"YES"<<endl;

	}
	return 0;
}