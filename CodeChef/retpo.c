#include<stdio.h>
#include<stdlib.h>
int main()
{
long long int x1,y1,p,c;
int t;
scanf("%d",&t);
while(t--)
{
scanf("%lld%lld",&x1,&y1);
c=0;
x1=abs(x1);
y1=abs(y1);
if((x1-y1)==0)
printf("%lld\n",x1+y1);
else
{
p=abs(x1-y1);
if(x1<y1)
	{
	if(p%2)
          c=((p-1)*2)+1;
	else
			c=2*p;
	}
     else
	{
	     if(p%2)
		c=((p-1)*2)+3;
	     else
		c=2*p;
	}
	    if((x1+p)>(y1+p))
	    c=c+(2*(x1-p));
	    else
	    c=c+2*(y1-p);
	    printf("%lld\n",c);
   }
}
 return 0;
}