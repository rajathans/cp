#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	long int n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld%ld",&n,&m);
		int arr[n];

		for(long int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		sort(arr,arr+n);
		int max=arr[n-1];
		long int count=0;
		for(long int i=0;i<n;i++)
		{
			arr[i]=max-arr[i];
			count+=arr[i];
		}
		if(count==m)
			puts("Yes");
 
		else
		puts("No");
		}
	return 0;
}
