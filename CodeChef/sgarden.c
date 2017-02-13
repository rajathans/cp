#include<iostream>
#include<cstdio>
#define LL long long
#define gc getchar_unlocked
LL int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  LL int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
    int flag,k,l;
LL int t,n,i,tmp=0;
t=read_int();
//scanf("%lld",&t);
while(t--){
    tmp=0;
    flag=1;
    n=read_int();
    LL int arr[2][n+9],a[n+9];
for(i=1;i<=n+7;i++)
arr[0][i]=i;
   // scanf("%lld",&n);
for(i=1;i<=n;i++)
a[i]=read_int();
//scanf("%lld",&a[i]);
while(1){
    if(tmp%2==0){
        k=1;
        l=0;}
        else{
        k=0;
        l=1;}
 
        for(i=1;i<=n;i++)
    {
        if(tmp==0)
        break;
        if(arr[l][i]!=i){
        flag=1;
        break;}
        flag=0;
    }
    if(flag){
     for(i=1;i<=n;i++)
     arr[k][a[i]]=arr[l][i];
     tmp++;}
   else
   break;
}
printf("%lld\n",tmp%100007);
}
return 0;
}