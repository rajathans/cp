#include <stdio.h>

int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    scanf("%d",&m);
		if(m%2 == 0 || n%2 == 0)
			printf("1/2");
		else if(m%2 != 0 && n%2 != 0)
			printf("%d/%d",(n*m)/2,n*m);
	}
    return 0;
}
