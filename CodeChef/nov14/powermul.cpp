#include<bits/stdc++.h>
using namespace std;

long long power(long long x, long long y) //O(n)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

bool isPrime(int num)
{
	for(int i=2;i<num;i++)
		if(num%i==0)
			return false;
	return true;
}

int main() 
{
	long long t,n,m,q,r;
	vector <long long> a;
	cin>>t;

	while(t--) 
	{
		cin>>n>>m>>q;
		int num = 1;

		while(q--)
		{
			cin>>r;
			int num=1;

			for(int i=(r+1);i<=n;i++)
			{
				num*= power(i,i);
			}

			int den = 1;
			for(int i=1;i<=(n-r);i++)
			{
				den*= power(i,i);
			}	

			cout<<((num/den)%m)<<endl;	
		}
	}
	return 0;
}