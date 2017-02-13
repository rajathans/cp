#include <iostream>
#include <stdio.h>

using namespace std;

int maxvalue (int nums[],int size)
{
    int max=nums[0];// the first element is taken in first
    // this checks each elements and compares the values
    for (int i=1; i< size; i++)
    {
        if (nums[i] > max)
        max=nums[i];
    }// end of for loop
    return max;
}

int main()
{
    long long N,i;
    int T,A[i];
    A[0]=0;

    cin>>T;

    while(T--)
    {
        cin>>N;
        for(i=1;i<=N;i++)
        {
            A[i]=N%i;
        }

        if(maxvalue(A,N)==0)
            cout<<N<<"\n";
        else
            cout<<maxvalue(A,N)<<"\n";
    }

    return 0;
}
