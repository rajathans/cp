#include <stdio.h>
int isOverLucky(int i);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,cnt=0;
        for(i=1;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                if(i*i==n){
                    if(isOverLucky(i)) cnt++;
                }
                else{
                    if(isOverLucky(i)) cnt++;
                    if(isOverLucky(n/i)) cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
 
int isOverLucky(int i)
{
    while(i)
    {
        int k=i%10;
        if(k==4 || k==7) return 1;
        i/=10;
    }
    return 0;
}