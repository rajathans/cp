#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false);
	int t,n,m,k,cnt3,i,cnt2,cnt1,j,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&k);
		if(k<=n*m)
		{
 
		cnt3=0;
		for(i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			printf("A");
			printf("\n");
		}
		}
		else if(k<3*n*m)
		{
			cnt2=0;
 
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			if(i==0 && j==0)
			printf("G");
			else if(i==n-1 && j==m-1)
			printf("T");
			else if(j!=0 && i%j==0)
			printf("C");
			else
			printf("A");
			printf("\n");
		}
 
		}
		else if(k<6*n*m)
		{
			cnt1=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			if(i==0 && j==0)
			printf("G");
			else if(i==n-1 && j==m-1)
			printf("T");
			else if(j!=0 && i%j==0)
			printf("C");
			else if(cnt1==0)
			{printf("C");cnt1++;}
			else
			printf("A");
			printf("\n");
		}
		}
		else
		{
 
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			if(i==0 && j==0)
			printf("G");
			else if(i==n-1 && j==m-1)
			printf("T");
			else if(count==0)
			{printf("C");count++;}
			else if(i==j)
			printf("T");
			else if(i==n-j)
			printf("G");
			else if(j!=0 && i%j==0)
			printf("C");
			else
			printf("A");
			printf("\n");
		}
 		}
	}
	return 0;
}  