#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll abs(ll diff)
{
	if(diff>=0)
		return diff;
	else
		return -diff;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll x,y;
		scanf("%lld",&x);
		scanf("%lld",&y);
		
		x = ll(abs(x));
		y = ll(abs(y));
		
		int flag=0;
		ll steps = 0;
		
		if(x>=y)
		{
			steps += 2*y;
			x =x-y;
			y=0;
			flag=0;
		}
		else
		{
			steps+=2*x;
			y = y-x;
			x=0;
			flag=1;
		}
		ll diff= ll(abs(y-x));
		if(flag==0)
		{
			if(diff%2 == 0)
			{
				steps += 2*diff;
			}
			else
			{
				steps += 2*(diff-1) +3;
			}
			printf("%lld\n", steps);
		}
		else
		{
			if(diff%2 == 1)
			{
				steps += 2*(diff-1) +1;
			}
			else
			{
				steps += 2*diff;
			}
			printf("%lld\n", steps);
		}
 
	}
}