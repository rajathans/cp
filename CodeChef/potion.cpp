#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX -1
#endif
 
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long int r,g,b,m,temp;
		cin>>r>>g>>b>>m;

		long long int maxr = MAX,maxg = MAX,maxb = MAX;
		for(int i = 0; i<r;i++)
		{
			cin>>temp;
			if(temp>maxr)
				maxr=temp;
		}
		for(int i = 0; i<g;i++)
		{
			cin>>temp;
			if(temp>maxg)
				maxg=temp;
		}
		for(int i = 0; i<b;i++)
		{
			cin>>temp;
			if(temp>maxb)
				maxb=temp;
		}
		long long int a[3] = {maxr,maxg,maxb};
		sort(a,a+3);
		
		while(m--)
		{	
			a[2] = a[2]/2;
			sort(a,a+3);

			if(a[2] == 0) 
				break;
		}
		sort(a,a+3);
		cout<<a[2]<<endl;
	}
return 0;
}