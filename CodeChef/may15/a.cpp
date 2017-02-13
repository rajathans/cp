#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char a[100003],b[100003];
    scanf("%d",&t);
    while(t--)
    {
    	int n,k;
        cin>>n>>k;
        string s;

        if(k==1)
        {
           cin>>s;
		   int count1=0,count2=0;
 
			for(int i=0;i<s.length();i++)
			{
				a[i] = '0';
				b[i] = '0';
			}
	 
	 
			for(int i=1;i<s.length()+2;i=i+2)
				a[i] = '1';
	 
			for(int i=0;i<=s.length()+2;i=i+2)
				b[i] = '1';
	 
			for(int i=0;i<s.length();i++)
			{
				if(s[i] != a[i])
					count1++;
	 
				if(s[i] != b[i])
					count2++;
	 
			}
	 
			if(count1 >= count2)
			{
				cout<<count2<<endl;
				for(int i=0;i<n;i++)
					cout<<b[i];
				cout<<endl;
			}
	 
			else
			{	
				cout<<count1<<endl;
				for(int i=0;i<n;i++)
					cout<<a[i];
				cout<<endl;
			}
	 
	 
			count1 = 0;
			count2 = 0;
        }
 	
 		int res1,res2;
        else              
        {
        	res2=0;
        	res1=1;
		    i=1;
		    while(a[i]!='\0')
		    {
		      if(a[i]==a[n-1])
		    {
		        res1++;
		           if(res1>k){
		               if(a[i]==a[i+1])
		               {
		                   if(a[i]=='1')
		                   {
		                       a[i]='0';
		                   }
		                   else
		                   {
		                       a[i]='1';
		                   }
		               }
		               else
		               {
		                    if(a[i-1]=='1')
		                   {
		                       a[i-1]='0';
		                   }
		                   else
		                   {
		                       a[i-1]='1';
		                   }
		               }
		                res2++;
		                res1=1;
		            }
		    }
		       else
		         res1=1;
		 
		      c1=a[i];
		      i++;
		    }
		 
		 
		  printf("%d\n%s\n",res2,a);
    	}
    }
    return 0;
}   
