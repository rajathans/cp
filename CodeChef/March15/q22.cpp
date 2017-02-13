#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n,k,q,l,r,counter;
		ll sz;
		string name,p,ur;

		cin>>n>>k>>q;
		cin>>name;

		for(ll i=0; i<q; i++)
		{
			cin>>l>>r;
			p = name.substr(l-1,r-l+1);
			cout<<p<<endl;
			sz = p.size();
			ll c1 = count(p.begin(), p.end(), '0');
			ll c2 = count(p.begin(), p.end(), '1');

			if(c1<=k && c2<=k) 
				cout<<(sz*(sz+1))/2;
			else 
			{
				counter=0;
				for(ll j=0; j<p.size(); j++)
				{
					for(int t=1; t<=p.size()-j; t++)
					{
						ur=p.substr(j,t);
						cout<<ur<<endl;
						ll d1 = count(ur.begin(), ur.end(), '0');
						ll d2 = count(ur.begin(), ur.end(), '1');
						if(d1<=k && d2<=k) 
							counter++;
					}
				}
				cout<<counter<<endl;
			}
		}
	}
	return 0;
}
