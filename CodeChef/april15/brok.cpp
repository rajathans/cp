#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

bool isPrime(int number)
{	
	int i;

	if(number == 1)
		return false;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}

int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		n = in.readInt();
		
		int [] a =new int [n];
		for(int i=0; i<n; i++)
		{
			a[i] = in.readInt();
		}

		int c=0,k=1;
		if (a[0] != a[1])
		{
			c += 2;
			k = 2;
		}

		int i;
		for(i=k; i<(n-1); i++)
		{
			int f = 0;
			if(a[i] != a[i-1])
			{	
				f = 1;
			}
			if (a[i] != a[i+1])
			{
				f = 2;
				i += 1;
			}
			if (f == 1)
				c++;
			else if( f==2 )
				c += 2;
			}
			if(i!=(n) && a[n-1] != a[n-2])
			{	
				c++;
			}

			System.out.println(c);
		}
	}

	return 0;
}

