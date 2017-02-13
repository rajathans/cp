#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		int an[1005];
		int dp[1005][3000];
 
		int n,k;
		cin>>n>>k;
 
		for(int i=1;i<=n;i++)
			cin>>an[i];
 
		for(int i=0;i<=n;i++)
		for(int j=0;j<=2999;j++)
			dp[i][j]=0;
 
 
		dp[0][k]=1; // one means at 0 th state xor = k is 1 ie possible
 
		for(int i=1;i<=n;i++)
		{
			int val=an[i];

			for(int j=0;j<=2048;j++)
			{
				if(dp[i-1][j]==1)
				{
					dp[i][j]=1;         // if i th  nubber not taken
                    dp[i][j^val]=1;     // else if i th  nubber taken into set
				}
			}
		}

		int ans=0,maxx=0;
		for(int i=2048;i>=0;i--)
		{
			if(dp[n][i]==1)
			{
				ans=i;
				break;
			}
		}

		cout<<ans<<endl;
 
	}
 
  return 0;
}