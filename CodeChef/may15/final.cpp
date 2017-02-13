#include <stdio.h> 
using namespace std;

int main()
{
  int t; 
  cin>>t;
  while(t--)
  {
    long long int n,k,count=0;
    cin>>n>>k;
    char ch[100003];
    scanf("%s",ch);

    int c[2];
    c[0]=0;
    c[1]=0;
 
    if(k==1)
    {
      string chf,chb;
      int cntf=0,cntb=0;
      chf=ch;
      chb=ch;

      for(int i=1;i<n;i++)
        if(chf[i]==chf[i-1])
        {
          chf[i]=97-chf[i];
          cntf++;
        }
 
      for(int i=n-2;i>=0;i--)
       {
       if(chb[i]==chb[i+1])
        {
          chb[i]=97-chb[i];
          cntb++;
        }
 
      }

      if(cntf<=cntb)
        cout<<cntf<<endl<<chf<<endl;
 
      else
        cout<<cntb<<endl<<chb<<endl; 
    }
 
    else
    { 
       for(int i=0;i<(n-1);i++)
       {
         c[ch[i]-48]++; 
         c[49-ch[i]]=0;
 
         if(c[ch[i]-48]>k)
         {  
          if(ch[i]==ch[i+1]) 
          {
            c[ch[i]-48]=0;
            c[49-ch[i]]=0;
            ch[i]=96+1-ch[i];
          }
         else
         {
            ch[i-1]=96+1-ch[i];
            c[ch[i]-48]=1;
            c[48+1-ch[i]]=0;
         }
         count++;
        }
       }
 
       c[ch[n-1]-48]++;
       if(c[ch[n-1]-48]>k)
       {
        count++;ch[n-1]=97-ch[n-1];
       }
 
       cout<<count<<endl<<ch<<endl;
    }
  }
  return 0;
}