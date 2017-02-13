#include <iostream>
#include <cstdio>

using namespace std;
int a[100000];

int main()
{
	int n,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&t);
	while(t--)
	{
		int q;
		scanf("%d",&q);
		if(q==1) 
		{
			int x,y,p;
			scanf("%d%d%d",&x,&y,&p);
			for(int i=x;i<=y;i++)
			{
				if(a[i]%p==0) a[i]=a[i]/p;
			}
		}

		else	
		{
			int x,y;
			scanf("%d%d",&x,&y);
			a[x]=y;
		}
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
