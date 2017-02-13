#include<iostream>
using namespace std;

int distance(int x1,int y1,int x2,int y2)
{
 int a = x2-x1;
 int b = y2-y1;
 a=a*a;
 b=b*b;

 return (a+b);
}
int main()
{
    ios_base::sync_with_stdio(false);
 int tcase,i,x1,x2,x3,y1,y2,y3,d1,d2,d3,count=0;
 cin>>tcase;
 for(i=0;i<tcase;i++)
 {
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  d1 = distance(x1,y1,x2,y2);
  d2 = distance(x1,y1,x3,y3);
  d3 = distance(x3,y3,x2,y2);

  if(d1>d2 && d1>d3)
  {
    if(d1 == d2+d3)
    {
      count++;
    }
  }
  else if(d2>d1 && d2>d3)
  {
    if(d2 == d1+d3)
    {
      count++;
    }
  }
  else if(d3>d1 && d3>d2)
  {
    if(d3 == d2+d1)
    {
      count++;
    }
  }
  else
  {
  }
 }
 cout<<count<<endl;
}
