#include <bits/stdc++.h>
using namespace std;
 
struct dva
{
    int x;
    int y;
};
 
bool func(dva w, dva z)
{
    if (w.x<z.x) return 1;
    return 0;
}
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector <dva> a(n);
    long long sum=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i].x;
        sum+=a[i].x;
        a[i].y=i+1;
    }
    sort (a.begin(),a.end(),func);
    int minn;
    if (!(sum%k)) minn=0;
    else minn=1;
    int j=0;
    int ss[1000][2];
    while (a[n-1].x-a[0].x!=minn && j<k)
    {
        j++;
        a[n-1].x--;
        a[0].x++;
        ss[j-1][0]=a[n-1].y;
        ss[j-1][1]=a[0].y;
        sort (a.begin(),a.end(),func);
    }
    cout<<max(minn,a[n-1].x-a[0].x)<<" ";
    cout<<j<<endl;
    for (int i=0; i<j; i++)
        cout<<ss[i][0]<<" "<<ss[i][1]<<endl;
    return 0;
}