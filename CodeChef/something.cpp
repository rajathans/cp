#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y[10];

cout<<"\n Input the no factorials to be calc.: ";
cin>>x;
cout<<x<<"\n";
int i;
int j;
for(i=0;i<x;i++)
{
cin>>y[i];
}
cout<<"\n";
int fact=1;

for(i=0;i<x;i++)
{
for(j=y[i];j>0;j--)
fact=fact*i;

cout<<fact<<"\n";
}

return 0;
}