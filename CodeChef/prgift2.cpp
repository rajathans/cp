#include <bits/stdc++.h>
using namespace std;
     
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i;
    long long int count = 0,k,n;
    scanf("%d",&t);

    while(t--)
    {
    cin>>n>>k;
    long long int a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]&1)
            count++;
    }

    if(k==0)
        cout<<"NO"<<endl;
    if((n-count)>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
} 