#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
 
int main()
{
    int test;
    string str;
    int flag=0;
    cin>>test;
 
    while(test--)
    {
        /*if(flag==1)
            goto l;
 
        getline(cin,str);
        flag=1;
 
        l:*/
        do
        {
            getline(cin,str);
        }while(str.empty());
 
 
 
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,in=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
 
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='a'||str[i]=='A')
                a++;
            else if(str[i]=='b'||str[i]=='B')
                b++;
            else if(str[i]=='c'||str[i]=='C')
                c++;
            else if(str[i]=='d'||str[i]=='D')
                d++;
            else if(str[i]=='e'||str[i]=='E')
                e++;
            else if(str[i]=='f'||str[i]=='F')
                f++;
            else if(str[i]=='g'||str[i]=='G')
                g++;
            else if(str[i]=='h'||str[i]=='H')
                h++;
            else if(str[i]=='i'||str[i]=='I')
                in++;
            else if(str[i]=='j'||str[i]=='J')
                j++;
            else if(str[i]=='k'||str[i]=='K')
                k++;
            else if(str[i]=='l'||str[i]=='L')
                l++;
            else if(str[i]=='m'||str[i]=='M')
                m++;
            else if(str[i]=='n'||str[i]=='N')
                n++;
            else if(str[i]=='o'||str[i]=='O')
                o++;
            else if(str[i]=='p'||str[i]=='P')
                p++;
            else if(str[i]=='q'||str[i]=='Q')
                q++;
            else if(str[i]=='r'||str[i]=='R')
                r++;
            else if(str[i]=='s'||str[i]=='S')
                s++;
            else if(str[i]=='t'||str[i]=='T')
                t++;
            else if(str[i]=='u'||str[i]=='U')
                u++;
            else if(str[i]=='v'||str[i]=='V')
                v++;
            else if(str[i]=='w'||str[i]=='W')
                w++;
            else if(str[i]=='x'||str[i]=='X')
                x++;
            else if(str[i]=='y'||str[i]=='Y')
                y++;
            else if(str[i]=='z'||str[i]=='Z')
                z++;
        }
 
        if((a+b+c+d+e+f+g+h+in+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z)>=26 && a>=1 && b>=1 && c>=1 && d>=1 && e>=1 && f>=1 && g>=1 && h>=1 && in>=1 && j>=1 && k>=1 && l>=1 && m>=1 && n>=1 && o>=1 && p>=1 && q>=1 && r>=1 && s>=1 && t>=1 && u>=1 && v>=1 && w>=1 && x>=1 && y>=1 && z>=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}