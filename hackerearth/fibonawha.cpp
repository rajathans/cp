#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int a=0,b=1,sum,j=0,i=0,num=0;
		cin>>num;

		if(num==0)
			cout<<"Y 1"<<endl;
		else if(num==1)
			cout<<"Y 2 3"<<endl;
		else
		{
			for(i=2;i<100;i++)
    		{
        		sum = a+b;
        		a = b;
        		b = sum;

        		if(sum==num)
        		{
            		j=1;
            		break;
            	}
            	if(sum>num)
            		break;
    		}

    		if(j==1)
    		{
        		cout<<"Y "<<i+1;
        		cout<<endl;
        	}
    		else
        		cout<<"N NOT PRESENT"<<endl;
    	}
	}
	return 0;
}