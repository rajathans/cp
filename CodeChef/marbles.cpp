#include <bits/stdc++.h>
using namespace std;

long long nCm(int n, int m) 
{
    n--;
    m--;
    
    long long result = 1;
    if(m > n/2)
        m = n-m;
    for (int i = 0 ; i < m; i++) 
    {
        result *= (n-i);
        result /= (i+1);
    }
    
    return result;
}

int main()
{
	int t;
	cin>>t;

	int n,k;

	while(t--) 
	{
		cin>>n>>k;
		cout<<nCm(n,k)<<endl;
	}

	return 0;
}