#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    long long int k,a,b,j=0;
    int n,p;
    cin>>n>>k>>p;
    long long int arr[n],i,arr1[n],x[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    x[arr1[0]]=0;
    for(int i =0;i<n;i++)
    {
        if(arr1[i]>(arr[i-1]+k))
            j=j+1;
        x[arr1[i]]=j;
    }
    for(i =0;i<p;i++)
    {
        cin>>a>>b;
        a--;
        b--;
        if(arr[b]-arr[a]<=k)
            cout<<"YES"<<endl;
        else
        {
            if(x[arr[a]]==x[arr[b]])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
        }
 
    }
    return 0;
}