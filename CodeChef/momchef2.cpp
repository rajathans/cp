#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        long long int i,t,n,k,p,sum;
        scanf("%lld", &t);
        while(t--) 
        {
                scanf("%lld%lld", &n,&k);
                if(k!=0) 
                {
                        long long int missing[k+1];
                        for(i=1;i<=k;i++) scanf("%lld", &missing[i]);
                        missing[0] = 0;
                        sort(missing,missing+k);
                        sum = 0;
                        for(i=1;i<=k;i++) 
                        {
                                sum += missing[i];
                                p = ((missing[i]) * (missing[i]+1))/2 - sum;
                                if(p<missing[i]) 
                                        break;
                        }
                        if((n>missing[k]) && (i>k)) 
                                p = (n*(n+1))/2-sum;         
                } 
                else 
                        p = (n*(n+1))/2;
                
                if((p+1)%2==0) 
                        printf("Mom\n");
                else 
                        printf("Chef\n"); 
        }
        return 0;
}