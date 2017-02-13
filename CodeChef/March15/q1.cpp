#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int X,Y,K,N;
		cin>>X>>Y>>K>>N;

		if(X<=Y)
		{
			cout<<"LuckyChef"<<endl;
			break;
		}

		bool flag = 0;

		vector <long long int> P(N);
		vector <long long int> C(N);

		for(long long int i=0;i<N;i++)
			cin>>P[i]>>C[i];
		
		for(long long int i=0;i<N;i++)
		{
			if(P[i]>=(X-Y))
			{
				if(C[i]<=K)
					flag=1;
			}
			if(flag == 1)
				break;
		}

		if(flag)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;

	}

	return 0;
}

