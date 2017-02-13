#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t,b,ls;
    double rsmin,rsmax;
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>b>>ls;
        rsmin=sqrt(pow(ls,2)-pow(b,2));
        rsmax=sqrt(pow(b,2)+pow(ls,2));
        cout<<rsmin<<" "<<rsmax<<'\n';
    }
    return 0;
}
