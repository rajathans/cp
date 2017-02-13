#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,k,i,n,count = 0;
	scanf("%d",&t);
	vector<int> arr;
 
	while(t--)
	{
		count = 0;
		scanf("%d %d",&n,&k);
		arr.resize(n);
 
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		for(i=0;i<n;i++)
		{
			if(arr[i]%2 == 0)
			{
				count++;
			}
		}

		if(k == 0 && count == n)
			printf("NO\n");
		else if(count >= k)
			printf("YES\n");
		else 
			printf("NO\n");
 
	}
	return 0;
}