#include <bits/stdc++.h>
using namespace std;

#define mod 1000000009
#define mm 4000000

int dp[2*mm+1];
int arr[1000001];
int n;

int main() 
{

  int t;
  scanf("%d",&t);
  memset(dp,0,sizeof(dp));
    
  while (t--) 
  {
    scanf("%d",&n);
    int diff;
    scanf("%d",&diff);
    for (int i = 1; i < n; i++) 
    {
      scanf("%d",&arr[i-1]);
      arr[i-1] = arr[i-1] - diff;
      diff  = arr[i-1] + diff;
    }

    int ans = 0;
    
    for (int i =0; i < n-1; i++) 
    {
      int x = dp[arr[i] + mm];
      dp[arr[i] + mm] = (ans+1)%mod;
      ans = (ans + (dp[arr[i] + mm] - x)%mod)%mod;
      //printf("%d %d %d\n",i,dp[arr[i] + mm],ans);
    }

    for (int i = 0; i < n-1; i++) 
    {
      dp[arr[i] + mm] = 0;
    }

    printf("%d\n",(ans+mod)%mod);
  }
  return 0;
}