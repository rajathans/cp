#include<iostream>
#include<stdio.h>

using namespace std;

int GCD(int a, int b)
{
    int gcd;
	while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}


int main()
{
    int A,B;
    cin>>A>>B;
    cout<<GCD(A,B);
    return 0;
}
