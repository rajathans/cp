#include <bits/stdc++.h>
using namespace std;

int fact(int x) 
{
	int ans= 1;
	for(int i=1;i<=x;i++)
   		ans = ans*i;
	return ans;
}


int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	
	vector <int> vec;
	vec.clear();
	vec.resize(n+1);
	int p = 0, ans = 0;
	
	for(int i=1;i<=n;i++)
		cin>>vec[i];
	
	for(int i=1;i<=n;i++)
	{
		p = vec[i];
		for(int j = 1;j<=vec[i];j++)
		{
			ans = ans + j*(fact(j)+p);
			//cout<<ans<<endl;
		}
	}
	
	cout<<ans%m<<endl;
	return 0;
}