#include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    char s[100010];
    int main()
    {
    long long t;
    long long type,i,n,g[]={0},b[]={0},c1,c2,b1,b2,g1,g2;
    scanf("%lld", &t);
    while(t--)
    {
    scanf("%lld", &type);
    if(type==2)
    	type=1;
    scanf("%s",s);
    //long long i,n,g_1[]={0},b_1[]={0},g_2[]={0},b_2[]={0},c1,c2,b1,b2,g1,g2;
    c1=c2=b1=b2=g1=g2=(long long)0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
    if(i%2==0)	
    {if(s[i]=='G') //bgbg
    {g[g1]=i; g1++;}}
    else
    {
    	if(s[i]=='B')
    	{b[b1]=i;b1++;}
    } 
    }
    if(b1!=g1)
    	c1=-1;
    else
    	{
    		for(i=0;i<b1;i++)
    			c1+=(long long)pow((abs(g[i]-b[i])),type);
    	}
    for(i=0;i<n;i++)
    {
    if(i%2==0)
    {if(s[i]=='B') //gbgb
    {b[b2]=i; b2++;}}
    else
    { 
    	if(s[i]=='G')
    	{g[g2]=i;g2++;} //gbgb
    }}
    if(g2!=b2)
    	c2=-1;
    else
    	for(i=0;i<b2;i++)
    	c2+=(long long)pow((abs(g[i]-b[i])),type);
    if(c1==-1 || c2== -1)
    	printf("%lld\n",(c1>c2?c1:c2));
    else
    	printf("%lld\n",(c1<c2?c1:c2));
 
    }	
    return 0;
    } 