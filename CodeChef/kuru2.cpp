#include <bits/stdc++.h>
using namespace std;

vector<int> prime_fact;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        prime_fact.push_back(2);
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            prime_fact.push_back(i);
            n = n/i;
        }
    }
 
    if (n > 2)
        prime_fact.push_back(n);
}

bool IsPrime(int number)
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
		cin>>n;
		if(IsPrime(n)==true)
			cout<<"1"<<endl;
		else
		{
			for(int i=0;i<prime_fact.size();i++)
				cout<<prime_fact[i]<<endl;
		}

	}
	return 0;
}