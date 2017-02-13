#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int N,M;

    long int C[40],P[1000];

    while(T--)
    {
        cin>>N>>M;

        for(int i=0;i<N;i++)
        {
            cin>>C[i]>>P[i];
        }
    }

    return 0;
}
