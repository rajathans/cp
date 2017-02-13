#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	string str;
	cin>>str;

	long long int t;
	scanf("%lld",&t);

	while(t--)
	{	
		char a,b;
		long long int c,d;
		scanf("%c %c %lld %lld",&a,&b,&c,&d);
		//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

		bool ch = 0;
		long long int start=0,end=0,ans=0;
		for(long long int i=c-1;i<d;i++)
		{
			if(ch==0)
			{
				if (str[i]==b)
					continue;
				if (str[i]==a)
				{
					ch=1;
					start+=1;
				}
			}
			else
			{
				if(str[i]==a)
					start+=1;
				if(str[i]==b)
					ans+=start;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
