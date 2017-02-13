#include <bits/stdc++.h>
using namespace std;
/*
**created by rajat on 1/8/2014
**/
 
int main() 
{
	ios_base::sync_with_stdio(false);
	int T,step;
	long long int x,y;
	
	scanf("%d",&T);
	while(T--)
	{
		step = 0;
		scanf("%lld%lld",&x,&y);
		if(((x==1)&&(y==0))||((x==0) && (y==0))||((x==1)&&(y==1)))
			step++;
		else
		{
			/*if(((x%2!=0)&&(x<0))||((x%2!=0)&&(x>0)))
			{
				if(x>0)
				{
					if((y<=x)&&(y<=(-1*x)))
				    {
				    	step++;
				    }
				}
				else
				{
					if((y>=(-1*x+1))&&(y<=(x+1)))
						step++;
				}
			}*/

			if(((x%2==0)&&(x<0))||((x%2!=0)&&(x>0)))
			{
				if(x<0)
				{
					if((y>=x)&&(y<=(-1*x)))
				    {
				    	step++;
				    }
				}
				else
				{
					if((y>=(-1*x+1))&&(y<=(x+1)))
						step++;
				}
			}

			if((y % 2 == 0) && (y != 0))
			{
				if(y < 0)
				{
		  	    if((x >= y) && (x <= (-1 * y + 1)))
		   		   	step++;
				}
				else
				{
					if((x>=(-1*y))&&(x<=(y-1)))
						step++;
				}
			}
			
		}

		if(step>0) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
} 