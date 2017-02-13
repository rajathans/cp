#include <bits/stdc++.h>
using namespace std;

int search(char** a,int n,int p,int q)
{
    int i,j;
    int fl=0,fl1=0;
    for(i=p;i<n;i++)
    {
        if(a[i][q]=='#')
        {
            fl=1;
            break;
     }
    }
    for(j=(n-1);j>=q;j--)
    {
    if(a[p][j]=='#')
    {
    fl1=1;
    break;
    }
    }
    if(fl==1 || fl1==1)
    return 0;
    else
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int sum=0;
        scanf("%d",&n);
        char **a;
        a=new char*[n];
        for(int x=0;x<n;x++)
        a[x]=new char[n];
        int i,j;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%c",&a[i][j]);
        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
        int p=search(a,n,i,j);
        sum+=p;
        }
        }
        printf("%d\n",sum);
    }
    return 0;
}