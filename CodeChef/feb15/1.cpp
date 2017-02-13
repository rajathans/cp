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
		cin>>str;

		bool next = 1;
		int a = 0,b = 0;

		for(int i=0; i<str.length(); i++)
		{
			if(str[i] == '+')
			{
				if(next == 1)
					a++;
				else
					b++;
			}
			else
			{
				if(next == 1)
					b++;
				else
					a++;
			}
			if(next == 0) 
				next = 1;
			else if(next == 1)
				next = 0;
		}

		if(b<a)
			cout<<b<<endl;
		else if(b>=a)
			cout<<a<<endl;
	}

	return 0;
}

//---+-+-+++
//-------