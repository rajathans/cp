#include <bits/stdc++.h>
using namespace std;

int main() 
{
		ios_base::sync_with_stdio(false);
		int k,n,w;
		cin>>k>>n>>w;
		int temp = w*(w+1)/2;
		int cost = temp*k;
		//cout<<"cost:"<<cost<<endl;
		if(n>=cost)
			cout<<"0"<<endl;
		else
			cout<<(cost-n)<<endl;
		return 0;
}

