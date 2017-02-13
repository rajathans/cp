#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) 
{
    for(int i=2; i<= sqrt(x); i++) 
    {
        if ((x%i) == 0)
            return false;
    }

    return true;
}

int findsum(int no)
{
  return no == 0 ? 0 : no%10 + findsum(no/10) ;
}

int main()
{
	int n;
	cin>>n;

	int x[n];
	string temp;
	int r=0;

	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		r=findsum(x[i]);
		cout<<r<<endl;
		if(isPrime(r)== true)
			temp[i]='1';
		else
			temp[i]='0';
	}

	for (int i = 0; i < n; i++)
	{
		cout<<temp[i]<<endl;
	}

	int binary = stoi(temp);
	int dec=0,base=1,rem;

	while (binary > 0)
    {
        rem = binary % 10;
        dec = dec + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout<<dec<<endl;
	return 0;
}
