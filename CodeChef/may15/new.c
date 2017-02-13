#include <stdio.h> 
using namespace std;

int main()
{
  int t; 
  scanf("%d",&t);
  while(t--)
  {
    int n,k;
    scanf("%d %d",&n,&k);
    char ch[100003];
    scanf("%s",ch);

    int c[2]={0,0};
 
    if(k==1)
    {
      char chf[100003],chb[100003];
      int cntf=0,cntb=0;
      for(int i=0;i<n;i++)
      {
        chf[i]=ch[i];
        chb[i]=ch[i];
      }

      for(int i=1;i<n;i++)
        if(chf[i]==chf[i-1])
        {
          if(chf[i]==49)
            chf[i] == 48;
          else
            chf[i] = '1';
          cntf++;
        }
 
      for(int i=n-2;i>=0;i--)
       {
       if(chb[i]==chb[i+1])
        {
          chb[i] = 97 - chb[i];
          cntb++;
        }
 
      }

      if(cntf<=cntb)
        printf("%d\n%s\n",cntf,chf);
 
      else
        printf("%d\n%s\n",cntb,chb);    
    }
 
    else
    { 
       int count=0;
       for(int i=0;i<(n-1);i++)
       {
         if (ch[i]=='1')
          c[1]++;
         else
          c[0]++; 

         c[49-ch[i]]=0;
 
         if(c[ch[i]-48]>k)
         {  
          if(ch[i]==ch[i+1]) 
          {
            c[ch[i]-48]=0;
            c[49-ch[i]]=0;
            ch[i]=97-ch[i];
          }
         else
         {
            ch[i-1]=97-ch[i];
            c[ch[i]-48]=1;
            c[49-ch[i]]=0;
         }
         count++;
        }
       }
 
       c[ch[n-1]-48]++;
       if(c[ch[n-1]-48]>k)
       {
        count++;
        ch[n-1]=97-ch[n-1];
       }
       printf("%d\n%s\n",count,ch);
    }
  }
  return 0;
}