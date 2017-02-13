#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int T,n,k;
	int count=0;
	int a[50];
	cin>>T;
	while(T--)
	{	count=0;
		cin>>n>>k;
		for(int i =0 ; i<n;i++)
			cin>>a[i];
		if(k==0)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]%2!=0)
					{cout<<"YES\n";break;}
			}
		}
	else{
		for(int i=0;i<n;i++)
		{	
			if(a[i]%2 == 0)
				count++;
 
			if(count==k)
				{cout<<"YES\n";break;}
		}
	     }
		if(count<k)
			{cout<<"NO\n";}
 
	}
 
	return 0;
}