#include<iostream>
#include<cstdio>
#include<stdlib.h>
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int GCD(int a, int b)
{
    int gcd;
	while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int T, N, M, i, j;
	int tot = 0, fav = 0, gcd = 0;
	scanint(T);

	while(T--)
	{
		scanint(N);
        scanint(M);

		for (i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				tot++;
				if((i + j) % 2 != 0)
					fav++;
			}
		}

		if(fav != 0)
		{
		    gcd = GCD (fav,tot);
			printf("%d/%d",(fav/gcd),(tot/gcd));
		}
		else if(fav == 0)
		{
			cout<fav<<"/"<<tot;
		}
	}

	return 0;
}
