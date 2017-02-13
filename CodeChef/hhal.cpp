#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
     
int main() 
{
    char str[100010];
    int t;
    scanf("%d",&t);
    while(t--)
        {
        cin>>str;
        long long len=strlen(str);
        int flag=0;
        long long i,j;
        for( i=0,j=len-1;i<len/2;++i,--j)
        {
        if(str[i]!=str[j])
            { 
                flag=1;break;
            }
        }
        if(flag) 
            printf("2\n");
        else 
            printf("1\n");
    }
    return 0;
} 