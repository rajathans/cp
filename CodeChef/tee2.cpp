#include <iostream>
#include <cmath>
using namespace std;
long long int power(long long int a,long long int b)
{
 
	long long int i,x=1,m=1000000007,res=1;
	while (b)
	{
    if (b % 2) { res = (res * a) % m; }
    a = (a * a) % m;
    b /= 2;
	}
	return res;
}
int main()
{
	long long int t,i,j,x,n,p,z,a,m=1000000007;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n>>p;
		x=power(p,n-1);
		a=pow(p,n);
		z=(a-1)/(p-1);
		cout<<z%m<<" "<<x<<endl;
	}

	return 0;
}