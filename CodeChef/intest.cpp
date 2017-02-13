#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k,t;
    int i,count=0;
    ios_base::sync_with_stdio (false);
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
            count+=1;
    }

    cout<<count;
    return 0;
}
