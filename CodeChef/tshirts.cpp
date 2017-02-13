#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

inline void fastInp(int &n ) 
{
    n=0;
    int ch=getchar(),sign=1;

    while( ch < '0' || ch > '9' )
    {
    	if(ch=='-')sign=-1; ch=getchar();
    }

    while( ch >= '0' && ch <= '9' )
        n=(n<<3)+(n<<1)+ ch-'0', ch=getchar();
    n=n*sign;
}

bool matrix[11][101];
int dp[1024][101];
int n;

int recurse (int num, int index) 
{ 

  if (index > 100) 
  {
    return (num%(1<<11)==0);
  }
  if (dp[num][index] != -1) 
  	return dp[num][index];

  int val = recurse(num,index+1);
  bool tshirtPre[11];
  bool tshirtNum[11];

  for (int i = 1; i <= n; i++) 
  {
    tshirtPre[i] = matrix[i][index];
    tshirtNum[i] = (num>>(i-1))%2;
  }

  for (int i = 1; i <= n; i++) 
  {
    if (tshirtPre[i] && tshirtNum[i]) 
    {
      val =  (val+recurse(num - (1<<(i-1)),index+1))%mod;
    }
  }
  dp[num][index] = val;
  return val;
}

int main () 
{
  int t;
  fastInp(t);

  while (t--) 
  {
    fastInp(n);

    for (int i = 0; i < 11; i++) 
    {
      for (int j = 0; j < 101; j++)
      {
        matrix[i][j] = false; //init
      }
    }

    for (int i = 1; i <= n; i++) 
    {
      string line;
      getline(cin, line);
      istringstream this_line(line);
      istream_iterator<int> begin(this_line), end;
      vector<int> values(begin, end);

      for (int j = 0; j < values.size(); j++) 
      {
        matrix[i][values[j]] = true;
      }
    }

    for (int i = 0; i < 1024; i++) 
    {
      for (int j = 0; j < 101; j++) 
      {
        dp[i][j] = -1;
      }
    }

    int ans = recurse((1<<n)-1,1);
    printf("%d\n",ans);
  }
}