#include <stdio.h>
 
int main()
{
    int n,i,count=0;
    long int k,test;
    scanf("%d%ld",&n,&k);
    for (i=0;i<n;i++)
    {
        scanf("%ld",&test);
        if (test%k==0)
        count++;
    }
    printf("%d",count);the
    return 0;
}