#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,x,y,p,q,l,m;
	cin>>a>>b>>c;

	x=a+b+c;
	y=a*b*c;
	p=(a+b)*c;
	q=a*(b+c);
	l=a+(b*c);
	m=(a*b)+c;


	if(x>=y && x>=p && x>=q && x>=l && x>=m )
		cout<<x<<endl;
	else if(y>=x && y>=p && y>=q && y>=l && y>=m)
		cout<<y<<endl;
	else if(p>=x && p>=y && p>=q && p>=l && p>=m)
		cout<<p<<endl;
	else if(q>=x && q>=y && q>=p && q>=l && q>=m)
		cout<<q<<endl;
	else if(l>=x && l>=y && l>=q && l>=p && l>=m)
		cout<<l<<endl;
	else
		cout<<m<<endl;
	return 0;
}