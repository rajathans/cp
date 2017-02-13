#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int z;
    float y,bal;

    cin>>z;
    cin>>y;

    bal = z - 0.50;
    if(z<y && fmod(z,5)==0.00)
    {
        cout<<bal;
    }
    else
    {
        cout<<y;
    }
    return 0;
}
