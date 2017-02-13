#include <stdio.h>

int main()
{
    int t,i,j,n,k[100],hold;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);

    	for(i=0;i<n;i++)
            {
                scanf("%d",&k[n]);
            }

    	for(i=0;i<n;i++)
            {
                printf("%d",&k[n]);
        }

    	for (i = 0;  i < n - 1;  i++)
        {
            for (j = 0;  j < n - i - 1;  j++)
            {
                if (k[j] > k[j+1])
                {
                    hold = k[j];
                    k[j] = k[j+1];
                    k[j+1]=hold;
                }
            }
        }

    		printf("%d",&k[2]);
    }
    return 0;
}