#include <stdio.h>
#include<time.h>

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

int main()
{
	int T, N, M, i, j;
	int tot = 0, fav = 0, gcd = 0;
	scanf("%d", &T);

	while(T--)
	{
		scanf("%d", &N);
        scanf("%d", &M);

		i = 0;
		while(i < N)
		{
			for(j = 0; j < M; j++)
			{
				tot++;
				if((i + j) % 2 != 0)
					fav++;
            }

            i++;
		}

		printf("\n%d\n",fav);
		printf("\n%d\n\n",tot);
        if(fav == 0)
		{
			printf("%d/%d",fav,tot);
		}

		else
		{
		    gcd = GCD (fav,tot);
			printf("%d/%d",(fav/gcd),(tot/gcd));
		}

	}

	return 0;
}

