#include <bits/stdc++.h>
using namespace std;

#ifndef MOD
#define MOD 1000000007
#endif
 
int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
	    int n,q;
	    cin>>n>>q;

	    vector <int> k;
	    k.resize(q);

	    vector <int> l;

		string s;
		cin>>s;

		y = s.length();

		for (int i = 0; i < q; i++)
			cin>>k[i];

		for (int i = 0; i < s.length(); i++)
		{
			string c = "";
			int x = i;
			for (int j = 0; j < y; j++)
			{
				c+=s[x];
				cout<<c<<endl;
				l.push_back(c);
				x+=1
			}
			y-=1
		}

		sort(l.begin(), l.end());

		vector <int> list;
		int count = 1;

		for (int i = 0; i <l.size()-1; i++)
		{
			if (l[i]==l[i+1])
				count++;
			else
				list.push_back(count)
				count=1
		}

		return 0;
	}