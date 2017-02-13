#include<stdio.h>
/*inline int fastread()
    {
    int i=0;
    char c=getchar_unlocked();
    while(c<48) c=getchar_unlocked();
    while(c>47)
    {
    i=i*10+c-48;
    c=getchar_unlocked();
    }
    return i;
    }*/
const int mod =1000000007,lim=100004;
int a[lim],b[lim],temp[lim];
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
      int  f=0,count=0;
         scanf("%d",&n);
 
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&b[i]);
            a[i]=i;
        }
        while(!f)
        {
            f=1;++count;
            for(int i=1;i<=n;++i)
                temp[b[i]]=a[i];
 
                for(int i=1;i<=n;++i)
                a[i]=temp[i];
           // for(int i=1;i<=n;++i)
              //  printf("%d ",a[i]);
                //printf("\n");
            for(int i=2;i<=n;++i)
            {
                if(a[i]<a[i-1])
                {
                    f=0;
                    break;
                }
            }
            if(count>mod)
                count=count%mod;
        }
        printf("%d\n",count);
    }
}