#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		cin>>n;

		int d[n];
		int p=0,q=0;

		for(int i = 1; i <= n; i++)
		{
			cin>>d[i];

			if(!p && d[i] >= 0) 
				p = i;
			if(!q && d[i] < 0) 
				q = i;
		}

		long long int res = 0;
		int cnt = 0;
		int i;
		while(!(p>n) && !(q>n))
		{
			
			int minm = min(d[p],-1*d[q]);
			res += abs(p-q)*minm;
			d[p] -= minm;
			d[q] += minm;
			if(d[p] == 0)
			{
				for(i = p+1; i <=n ;i++)
				{
					if(d[i]>=0)
					{
						break;
					}
					
				}
				p = i;
			}
			if(d[q] == 0)
			{				
				for(i = q+1; i <=n ;i++)
				{
					if(d[i]<0)
					{
						break;
					}
				}	
				q = i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}