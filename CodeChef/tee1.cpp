#include <iostream>
using namespace std;
 
int main() {
	int N;
	cin>>N;
	while(N--)
	{
		int a,b;
		cin>>a>>b;
		int ar[100],br[100],i=0,j=0;
		while(a%10==0)
		{
			a/=10;
 
		}
		while(b%10==0)
		{
			b/=10;
		}
		while(a!=0)
		{
			ar[i]=a%10;
			a/=10;
			i++;
		}
		while(b!=0)
		{
			br[j]=b%10;
			b/=10;
			j++;
		}
 
		for(int x=0;x<=i-1;x++)
			cout<<ar[x];
		cout<<endl;
		for(int x=0;x<=j-1;x++)
			cout<<br[x];
	}
}
