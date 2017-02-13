#include<iostream>
#include<stdio.h>

using namespace std;

int Partition(long long a[], long long beg, long long end)
{
int p=beg, pivot=a[beg], loc;

for(loc=beg+1;loc<=end;loc++)
{
if(pivot>a[loc])
{
a[p]=a[loc];
a[loc]=a[p+1];
a[p+1]=pivot;
p=p+1;
}
}
return p;
}

void QuickSort(long long a[], long long beg, long long end)
{
if(beg<end)
{
int p=Partition(a,beg,end);

QuickSort(a,beg,p-1);
QuickSort(a,p+1,end);
}
}

int main()
{
long long a[1000000],n,beg,end,i;
cin>>n;

ios_base::sync_with_stdio (false);

for(i=1;i<=n;i++)
{
cin>>a[i];
}
beg=1;
end=n;

QuickSort(a,beg,end);

for(i=1;i<=n;i++)
{
cout<<a[i]<<endl;
}
return 0;
}
