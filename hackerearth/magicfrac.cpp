#include <iostream>
#include <stdio.h>

using namespace std;

int GCD(int a, int b)
{
    int gcd;
	while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}

int factorial(int x) 
{
	int ans= 1;
	for(int i=1;i<=x;i++)
   		ans = ans*i;
	return ans;
}

int main()
{
	int n,count = 0,mul = 0;
	cin>>n;
	int fac = factorial(n);
	
	for(int i = 1; i <=n ; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			mul = i*j;
			if(i < j && GCD(j,i) == 1)
			{
				if(mul = fac)
					count++;
			}
		}
	}

	cout<<count<<endl;
	return 0;
}