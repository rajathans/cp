#include <bits/stdc++.h>
using namespace std;

long long int calcm(long long int steps,long long int lcm)
{
	if(lcm%steps == 0)
		return lcm;
	else
	{
		long long int g=steps,l=lcm;
		if(lcm>steps)
		{
			g=lcm;l=steps;
		}
		lcm=g;
		while(lcm%l!= 0 || lcm%g!=0) 
			lcm++;
	}
	return lcm;
}

int main()
{
	ios_base::sync_with_stdio(false);
	long long int t;
	scanf("%lld",&t);

	while(t--)
	{
		long long int len;
		scanf("%lld",&len);

		long long int ** arr= new long long int*[2];
		arr[0] = new long long int[len];
		arr[1] = new long long int[len];

		for(long long int i=0;i<len;i++)
		{
			int temp=0;
			arr[0][i] = i+1;
			scanf("%lld",&arr[1][i]);
		}

		long long int lcm =1;
		for(int i=0;i<len;i++)
		{
			long long int steps =1;
			int temp_index = i;
			while(arr[1][temp_index] != arr[0][i])
			{
				temp_index = int(arr[1][temp_index])-1;
				steps++;
			}
			lcm = calcm(steps,lcm);
		}
		printf("%lld\n", lcm);
	}
}