#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,N,i;
    cin>>t;
    vector<int> A;
    int unique;

    while(t--)
    {
        unique = 0;
        cin>>N;
        A.resize(N);

        if(N==1)
            cout<<"1"<<endl;
        else
        {
            for(i=0;i<N;i++)
                cin>>A[i];

            sort(A.begin(),A.end());

            for (i = 0; i < N; i++)
            {
                if(A[i] != A[i+1])
                    unique++;
            }

            cout<<unique<<endl;
        }
    }

    return 0;
}