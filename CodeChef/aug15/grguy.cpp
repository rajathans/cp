#include <bits/stdc++.h>
using namespace std;

#define max INT_MAX;

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		string l[2];
		cin>>l[0];
		cin>>l[1];
		
		int temp1 = 0, z = 0, i = 0, kz = 0;

		while(l[0][i]) 
		{
			if(l[z][i] == '#') 
			{
				temp1 = max;
				goto x;
			}
			while(l[z][i] == '.') 
				i++;
			z = !z; 
			kz++;
		}
		temp1 = kz - 1;
		x:

		int temp2 = 0;
		z = 1;
		i = 0;
		kz = 0;
		while(l[0][i]) 
		{
			if(l[z][i] == '#') 
			{
				temp2 = max;
				goto l;
			}
			while(l[z][i] == '.') 
				i++;
			z = !z; 
			kz++;
		}
		temp2 = kz - 1;
		l:

		if(min(temp1,temp2) == INT_MAX) 
			cout<<"No"<<endl;
		else 
			cout<<"Yes"<<endl<<min(temp1,temp2)<<endl;
	}
	return 0;
}