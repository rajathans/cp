#include <bits/stdc++.h>
using namespace std;

#define MAX 100005

int main() 
{
	ios_base::sync_with_stdio(false);
	int m,n,b,i,j,z,a[MAX];
	char c;

	cin>>n>>m;

	for(i=1;i<=n;i++)
		cin>>a[i];

	int ii,v;
	v=0;

	for(i=0;i<m;i++)
	{
 
		cin>>c>>b;

		if(c=='C')
		{
			v=(v-b)%n;
		}

		else if(c=='A')
		{
			v=(v+b)%n;
		}

		else if(c=='R')
		{
 
				if(v<=0)	
					z=(1-v);
				else if(v>0)
					z=n-v+1;
				ii=z+b-1;
				if(ii>n)
					ii=ii%n;
				cout<<a[ii]<<endl;
 
		}	    
	}
 
	return 0;
}