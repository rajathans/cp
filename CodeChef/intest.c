#include <stdio.h>

int main()
{
    long long n,k,t;
    int i,count=0;

    read_int(n);
    read_int(k);

    for(i=0;i<n;i++)
    {
        read_int(t);
        if(t%k==0)
            count+=1;
    }

    printf("%d",count);
    return 0;
}
