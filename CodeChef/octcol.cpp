#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t,n,count,m,max,required,a;
	cin>>t;
	int answer;
	while(t--)
	{
		cin>>n>>m;
		required=0;
		max=0;
		count=n;
		while(count--)
		{
			cin>>a;
			if(max<a)
			{
				max=a;
			}

			required+=a;
		}
		required=required-max;
		required=max*(n-1)-required;
		answer=m-required;
		
		if(answer>=0 && answer%n==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
 
	}
	return 0;
} 