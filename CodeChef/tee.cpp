#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int calc(int a,int b)
{
	if(b==1)
		return a%mod;
	if(b==2)
		return ((a%mod)*(a%mod))%mod;
	if(b%2==0)
		return(((calc(a,b/2))%mod)*((calc(a,b/2))%mod))%mod;
	else
		return ((a%mod)*((calc(a,(b-1)/2))%mod)*((calc(a,(b-1)/2))%mod));
}

int main()
{
	int t,m,n,ans;
	cin>>t;

	while(t--)
	{
		string line;
     	getline(cin, line);
      	istringstream this_line(line);
      	istream_iterator<int> begin(this_line), end;
     	vector<int> values(begin, end);

     	m = values[0];
     	n = values[1];

     	m=m%1000000007;
    	n=n%1000000007;

    	ans = calc(m,n);
    	cout<<ans<<endl;
	}

	return 0;
}