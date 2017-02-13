#include <iostream>
using namespace std;

int main()
{
	int t,i,j,k,l,m,n;
	cin>>t;
	while(t--)
{
	cin>>n>>k;
	int arr[n+1];
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	int hash[n+1];

	if(arr[0]%2 == 0)
		hash[0] = 1;
	else
		hash[0] = 0; 
	for(i=1;i<n;i++)
	{
		if(arr[i]%2 == 0)
			hash[i] = hash[i-1] + 1;
		else
		hash[i] = 0;
	}
	j = 0;
	
	for(i=0;i<n;i++)
	{
		if(hash[i] == k)
		{
			j = 1;
		}
	
	}

if(j == 1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
	
return 0;
}