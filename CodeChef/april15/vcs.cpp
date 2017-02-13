#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		vector <int> ignored;
		vector <int> tracked;

		int m,n,k;
		cin>>n>>m>>k;

		ignored.resize(m);
		tracked.resize(k);

		vector <int> base;
		base.resize(n);
		for (int i = 0; i < n; i++)
			base[i] = i+1;

		int trackignored=0, untrackedignored=0;

		for (int i = 0; i < m; i++)
			cin>>ignored[i];

		for (int i = 0; i < k; i++)
			cin>>tracked[i];

		for (int i=0; i<m; i++)
		{
			if (find(tracked.begin(), tracked.end(),ignored[i])!=tracked.end())
				trackignored++;
		}

		for (int i = 0; i < n; i++)
		{
			if (find(tracked.begin(), tracked.end(),base[i])==tracked.end())
			{
				if (find(ignored.begin(), ignored.end(),base[i])==ignored.end())
					untrackedignored++;
			}
		}


		cout<<trackignored<<" "<<untrackedignored<<endl;

	}

	return 0;
}

