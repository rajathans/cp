#include <bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    ios_base::sync_with_stdio(false);
    lld t;
    scanf("%lld",&t);
    while(t--)
    {
        lld n;
        lld sum;
        scanf("%lld",&n);

        if(n != 1)
        {
            sum=n+1;
            lld endloop;
            double limit = sqrt(n);
            if(limit%1 == 0)
            {   
                sum += (long)limit;
                    endloop = (long)(limit-1);
                }
                else
                    endloop=(long)limit;

                for(lld i=2; i<=endloop; i++)
                {
                    if(n%i == 0)
                    {
                        long temp = n/i;
                        sum += (temp + (long)(n/temp));
                    }
                }
        }
        else
            sum=1;
        printf("%lld\n", sum);
    }

    return 0;
}