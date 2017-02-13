#include <bits/stdc++.h>
using namespace std;

long long int mod(long long int x)
{
    if (x < 1000000007)
        return x;
    else
        return x % 1000000007;
}

long long int power(long long int a, long long int k) 
{
  long long int res = 1;
  long long int cur = a;
  while (k) 
  {
    if (k%2) 
    {
    	res = mod(mod(res)*mod(cur));
    }
    k /= 2;
    cur = mod(mod(cur)*mod(cur));
  }
  return res;
}

long long int nck(long long int n, long long int k)
{
	long long int num = 1;
	if (n < k)
		return 1;
	for (long long int i = n; i > n- k; --i) {
		num = mod(mod(num)*mod(i));
	}
	long long int den = 1, ti;
	for (long long int i = 1; i <=k; ++i)
	{
		ti = i;
	    while(mod(ti) == 0) 
	    {
	      ti /= 1000000007;
	    }
	    den = mod(mod(den)*mod(ti));
	}
	return mod((mod(num)*mod((power(den,1000000007-2)))));
}

int main()
{
	ios_base::sync_with_stdio(false);
	long long int n,i=1,count = 0,temp;
	cin>>n;
	
	while(i <= n - 12)
	{
		temp = n - i;
		if (temp%2 == 1) 
		{
			i++;
			continue;
		}
		
		temp /= 2;
		temp -= 6;
		
		if (temp >= 0)
		{
			count = count + nck(temp + 5, 5) % 1000000007;
			count = count % 1000000007;
		}
		i++;
	}
	cout<<count<<endl;
	return 0;
}