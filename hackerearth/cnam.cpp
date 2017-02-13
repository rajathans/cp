#include <bits/stdc++.h>
using namespace std;

#ifndef mod
#define mod 1000000007
#endif

long long C(int n, int r)
{
    if(r > n / 2) 
    	r = n - r; 
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) 
    {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main() 
{
	int t,n,r,sum=0,ans=0,need=0;
	vector<int> X;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&r);
		X.resize(n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&X[i]);
			sum=sum+X[i];
		}

		need=r-sum;
		ans=C(n,need);
		cout<<ans%mod<<endl;
	}
	return 0;
}
 
