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
		char one = str[0];
		char two = str[1];

		if (one == two)
		{
			cout<<"NO"<<endl;
			continue;
		}

		int f=0;
		int len = str.length();

		for (int i = 2; i < len; i++)
		{
			if (i%2==0 && str[i]==one)
				f=0;
			else if (i%2==1 && str[i]==two)
				f=0;
			else
			{
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}

