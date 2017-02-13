#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
int a=15, b=10, lcm=1;
while(1)
{
if(lcm%a==0 && lcm%b==0)
{
cout<<"LCM= "<<lcm<<endl;
break;
}
lcm++;
}
cout<<"GCD= "<<(a*b)/lcm;
return 0;
}
