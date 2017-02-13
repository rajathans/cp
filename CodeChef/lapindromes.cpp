#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,mid;
	string str;
	vector <char> strf;
	vector <char> strb;
	cin>>t;

	while(t--)
	{
		cin>>str;
		mid = (str.length())/2;

		strf.resize(str.length());
		strb.resize(str.length());

		if(str.length() % 2 != 0)
		{
			for(int i=0;i<=mid-1;i++)
			{
				strf[i] = str[i];
			}

			for(int j=mid+1;j<=str.length();j++)
			{
				strb[j] = str[j];
			}
		}
		else
		{
			for(int i=0;i<=mid;i++)
			{
				strf[i] = str[i];
			}

			for (int j = mid+1; j <= str.length(); j++)
			{
				strb[j] = str[j];
			}
		}

		sort(strf.begin(),strf.end());
		sort(strb.begin(),strb.end());

		int flag=0;
		for(int i=0;i<mid;i++)
		{
			if(strf[i]==strb[i])
			{
				flag=1;
			}

			else
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
			cout<<"YES"<<endl;
		else if(flag==0)
			cout<<"NO"<<endl;

	}

	return 0;
}