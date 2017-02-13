#include <iostream>

using namespace std;

int main() 
{
long int a,b;
cin>>a>>b;
int t=0;
long int c;
ios_base::sync_with_stdio(false);


for(int i=0;i<a;i++)
{	
	cin>>c;
	if(c%b==0)
	{
		t++;
	}
}
	cout<<t<<endl;
	return 0;
}