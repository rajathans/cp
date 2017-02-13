#include <bits/stc++.h>
using namespace std;

int main() 
{
	long long int n,sum,sumtemp,t,k,temp[1000000],i;
	cin>>t;

	while(t--)
	{
		int flag=0;
		sumtemp=0;
		cin>>n>>k;
		for(i=0;i<k;i++)
			cin>>temp[i];
		sort(temp,temp+k);
		for(i=0;i<k;i++)
		{
			sum=(temp[i]*(temp[i]+1))/2;
			sumtemp+=temp[i];
			if(sum-sumtemp<temp[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		   	sum-=sumtemp;
		else 
			sum=((n*(n+1))/2)-sumtemp;
		if(sum%2==0)
			printf("Chef\n");
		else 
			printf("Mom\n");
	}
	return 0;
}