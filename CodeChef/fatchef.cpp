#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000009

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		char col[100001];
		memset(col,'x',sizeof(col));
		char temp;
		int pos;
		int minpos = 100001;

		for(int i = 0; i < m; i++)
		{
			cin>>temp;
			scanf("%d",&pos);
			col[pos] = temp;
			if(minpos > pos) 
				minpos = pos;
		}

		long long int res = 1;
		for(int i = minpos+1; i <= n;i++)
		{
			if(col[i]!='x' && col[i] != col[minpos])
			{
				res = (res*(i-minpos))%MOD;
				minpos = i;
			}
			else if (col[i] == col[minpos])
			{
				minpos = i;
			}
		}
		printf("%lld\n", res);
	}
	return 0;
}