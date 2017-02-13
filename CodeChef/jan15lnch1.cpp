#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int num = 0;
		cin>>num;
		int rem = 0;
		int count = 0;
		while(num>0)
		{
			rem = num % 10;
			if(rem==4)
				count++;
			num = num /10;
		}
		cout<<count<<endl;
	}
	return 0;
}