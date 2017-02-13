#include <bits/stdc++.h>
using namespace std;

#ifndef NUMBER
#define NUMBER 4294967296
#endif

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        string strn;
        cin>>strn;
        int length=strn.length();
        int flag = -1;
        long X,temp=0;
        for(long long k=1;k<=505;k++)
        {
            X = k;
            char arr[length+1];
            for(long i=0;i<length;i++)
            {
                X = ((X * 1103515245)%NUMBER + 12345%NUMBER)%NUMBER;
                temp = (X / 65536) % 32768;
                arr[i]=temp%2+48;
            }
            if(strn.compare(arr)==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"LCG"<<endl;
        else
            cout<<"Xorshift"<<endl;
 
    }
}