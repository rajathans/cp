#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long int t,n,count,i;
	string s;
	cin>>t;

	while(t--)
	{
		count = 0;
		cin>>n;
		cin.getline(s,n);
		
		for(i=0;i < n;i++)
		{
			if(s[i] == '1')
			{
				count++;
			}
		}
		
		cout<<((count*(count+1))/2)<<endl;
	}
	return 0;
}
