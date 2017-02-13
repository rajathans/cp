#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int n,l,x,y;
    cin>>n>>l>>x>>y;
    vector <long long> vec(n);
    cin>>vec[0];

    int razn1=0;
    int razn2=0;
    int razn3=0;
    int razn4=0;
    bool boy=0;
    bool girl=0;

    for (int i=1; i<n; i++)
    {
        cin>>vec[i];
        for (int j=i-1; j>=0; j--)
        {
            if (vec[i]-vec[j]>x+y) 
                break;
            if (vec[i]-vec[j]==x+y)
            {
                razn1=vec[i];
                razn2=vec[j];
            }
            if (vec[i]-vec[j]==abs(x-y) && vec[i]+abs(x-y)<=l)
            {
                razn3=vec[i];
                razn4=vec[j];
            }
            if (vec[i]-vec[j]==x) 
                boy=1;
            if (vec[i]-vec[j]==y) 
                girl=1;
        }
    }
    if (boy)
        if (girl)
        {
            cout<<"0";
            return 0;
        }
        else
        {
            cout<<"1"<<endl;
            cout<<y;
            return 0;
        }
    if (girl)
    {
        cout<<"1"<<endl;
        cout<<x;
        return 0;
    }
    if (razn1!=0 || razn2!=0)
    {
        cout<<"1"<<endl;
        cout<<razn1-x;
        return 0;
    }
    if (razn3!=0 || razn4!=0)
    {
        cout<<"1"<<endl;
        cout<<razn3+min(x,y);
        return 0;
    }
    cout<<"2"<<endl;
    cout<<x<<" "<<y;

    return 0;
}