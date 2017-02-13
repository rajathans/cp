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

		vector <string> ans;
		ans.resize(str.length());

		vector <int> counts;
		vector <char> chars;
		chars.resize(100000);
		chars.resize(100000,'0');

		int counted = 0;

		for(int i=0;i<str.length();i++)
		{
			counted = count(str.begin(), str.end(),str[i]);
			counts[counted] = counted;
			chars[counted] = str[i];
		}

		for(int i=0;i<100000;i++)
		{
			if(counts[i]==0)
				counts.erase(counts.begin()+1);
			if(chars[i]=='0')
				chars.erase(chars.begin()+1);
		}

		for(int i=0;i<chars.size();i++)
			cout<<"chars["<<i<<"]"<<endl;
		for(int i=0;i<counts.size();i++)
			cout<<"counts["<<i<<"]"<<endl;
	}

	return 0;
}

