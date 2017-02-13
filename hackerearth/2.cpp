#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int x) 
{
	if(x==0 || x==1)
		return false;
    for(long long int i=2; i<= sqrt(x); i++) 
    {
        if ((x%i) == 0)
            return false;
    }

    return true;
}

int main()
{
	long long int t;
	cin>>t;

	while(t--)
	{
		long long int m,n,x;
		cin>>m>>n>>x;

		vector <char> vec_ch(x);
		for (long long int i = 0; i < x; i++)
			cin>>vec_ch[i];

		vector <char> vec(n-m+1);

		long long int j = 0;
		for (long long int i = 0; i < vec.size(); i++)
		{
			if(isPrime(i)==true)
			{
				if(j>vec_ch.size())
					j=0;
				vec[i] = vec_ch[j];
				j++;
			}
		}

		long long int ans = count(vec.begin(), vec.end(),'H');
		cout<<ans<<endl;

	}

	return 0;
}

