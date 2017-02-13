#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		if(n==1)
		{
			cout<<"0"<<endl;
			break;
		}
		else if(n==2)
		{
			cout<<"2"<<endl;
			break;
		}

		int first = 1, second = 2, fibo = 0;
		int ans = 0;

		while(fibo <= n)
		{
			fibo = first + second;
			first = second;
			second = fibo;
			if(fibo<=n && fibo%2==0)
			{
				ans = ans + fibo;
			}
		}

       	cout<<ans + 2<<endl;
	}

	return 0;
}
