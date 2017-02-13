#include<stdio.h>
#include<math.h>
 
int main()
{
    int t,i,j,typ,b,g,c1,c2,bsum,gsum,bsum2,gsum2;
    long long int ans,ans2;
 
    char str[100001];
    scanf("%d",&t);
 
    while(t--)
    {
        scanf("%d",&typ);
        scanf("%s",str);
        ans=0;ans2=0;
        c1=0;c2=0;
        b=0;g=0;
        gsum=0;bsum=0;
        gsum2=0;bsum2=0;
 
        if(typ==0)
        {
 
 
 
        for(i=0;str[i]=='B'||str[i]=='G';i++)
        {
            if(str[i]=='B')
                b++;
                else
                g++;
 
        }
       // printf("  %d %d\n",b,g);
        if(b-g>1||g-b>1)
        {
         ans=-1;
         printf("%lld\n",ans);
         continue;
        }
        if(b==g)
        {
            for(i=0;str[i]=='B'||str[i]=='G';i++)
            {
                if(i%2==0)
                {
                    if(str[i]=='B')
                    {
                       c2++;
                    }
                    if(str[i]=='G')
                        {c1++;
                        }
                }
                if(i%2!=0){
                    if(str[i]=='B')
                    {
                        c1++;
                    }
                    if(str[i]=='G')
                    {
                        c2++;
                    }
                }
            }
 
            if(c1>c2)
            {
                ans=c2/2;
            }
            else ans=c1/2;
 
            printf("%lld\n",ans);
            continue;
 
 
        }
 
        if(b>g)
        {
            for(i=0;str[i]=='B'||str[i]=='G';i++)
            {
                if(i%2==0&&str[i]=='G')
                    c1++;
                if(i%2!=0&&str[i]=='B')
                    c1++;
 
            }
            ans=c1/2;
             printf("%lld\n",ans);
            continue;
        }
        if(g>b)
            {
            for(i=0;str[i]=='B'||str[i]=='G';i++)
            {
                if(i%2==0&&str[i]=='B')
                    c1++;
                if(i%2!=0&&str[i]=='G')
                    c1++;
 
            }
            ans=c1/2;
             printf("%lld\n",ans);
            continue;
        }
 
 
        }
 
 
 
 
    else {
            for(i=0;str[i]=='B'||str[i]=='G';i++)
        {
            if(str[i]=='B')
                b++;
                else
                g++;
 
        }
       // printf("  %d %d\n",b,g);
        if(b-g>1||g-b>1)
        {
         ans=-1;
         printf("%lld\n",ans);
         continue;
        }
 
        if(b>g)
        {
          for(i=0;str[i]=='B'||str[i]=='G';i++)
          {
              if(i%2==0&&str[i]=='G')
                    gsum=gsum+i;
                if(i%2!=0&&str[i]=='B')
                    bsum=bsum+i;
 
                ans=abs(bsum-gsum);
 
          }
            printf("%lld\n",ans);
                continue;
 
 
 
        }
 
        if(b<g)
        {
           for(i=0;str[i]=='B'||str[i]=='G';i++)
            {
                if(i%2==0&&str[i]=='B')
                    bsum=bsum+i;
                if(i%2!=0&&str[i]=='G')
                    gsum=gsum+1;
 
            }
            ans=abs(gsum-bsum);
            printf("%lld\n",ans);
                continue;
 
 
 
        }
        if(b==g)
        {
           for(i=0;str[i]=='B'||str[i]=='G';i++)
            {
                if(i%2==0)
                {
                    if(str[i]=='B')
                    {
                       bsum2=bsum2+i;
                    }
                    if(str[i]=='G')
                        {
                            gsum=gsum+i;
                        }
                }
                if(i%2!=0){
                    if(str[i]=='B')
                    {
                      bsum=bsum+i;
                    }
                    if(str[i]=='G')
                    {
                        gsum2=gsum2+i;
                    }
                }
            }
            ans=abs(gsum-bsum);
            ans2=abs(gsum2-bsum2);
            if(ans2<ans)
                ans=ans2;
            printf("%lld\n",ans);
                continue;
 
        }
     }
 
 
    }
 
 
 
 
 
 
    return 0;
 
}
 