#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


int GCD(int a, int b)
{
	int lcm = 1;
	while(1)
	{
		if(lcm%a==0 && lcm%b==0)
		{
			break;
		}
	lcm++;
	}
	return (a*b)/lcm;
}


using namespace std;

int main()
{
	int T, N, M, i, j;
	int tot, fav;
	cin>>T;

	while(T--)
	{
		cin>>N>>M;

		for (i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				cout<<i<<" "<<j<<"\n";
				tot++;
				if((i + j) % 2 != 0)
					fav++;
			}
		}

		if(fav!=0)
		{
			int gcd = GCD (fav,tot)
			cout<<fav/gcd<<"/"<<tot/gcd;
		}
		else
		{
			cout<<fav<<"/"<<tot;
		}
	}
	return 0;
}