#include<iostream>
using namespace std;

int factorial(int N)
{
	int ans=1;
	for(int i=1;i<=N;i++)
	{
	ans=ans*i;
	}
	return ans;
}

int main()
{
    int t;
    cin>>t;
	int i;
	long long fact;
	while(t--)
    {
        cin>>i;
        fact=factorial(i);
        cout<<fact;
    }
	return 0;
}
