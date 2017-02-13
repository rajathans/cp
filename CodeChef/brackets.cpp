#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t,i,j,k;
    char s[100005];
    scanf("%d",&t);
    while(t--)
    {
        int max=-1,k=0;
        scanf("%s",s);

        int len=strlen(s);

        for(i=0;i<len;i++)
        {
            if(s[i]=='(')
                k++;
            if(s[i]==')')
                k--;
            if(k>max)
                max=k;
        }

        for(i=0;i<max;i++)
            printf("(");
        
        for(i=0;i<max;i++)
            printf(")");

        cout<<endl;
    }
    return 0;
}