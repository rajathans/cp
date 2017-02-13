#include <bits/stdc++.h>
using namespace std;
 
unsigned int x,s,y,z,w;
string a;
unsigned nextInt1()
{
	x=x*1103515245+12345;
	return (x/65536)%32768;
 
}
 
unsigned nextInteger2(void){
  unsigned t = x ^ (x << 11);
  x = y; y = z; z = w;
  return w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)); 
}


int main()
{
	long long int t;
	unsigned int s;
	cin>>t;
	while(t--)
	{
		cin>>a;
		for(s=0;;s++)
		{ 
			bool g1,g2;
			x=s;
			char c1;
			int i;
			for(i=0;a[i]!='\0';i++)
			{
				c1='0'+nextInt1()%2;
				if(c1!=a[i])
				{
					g1 = 0;
					goto l1;
				}
			}
			g1 = 1;
			l1:

			x = s;
  			y = x * s;
  			z = y * s;
  			w = z * s;
  			char c2;
  			for(int i=0;a[i]!='\0';i++)
  			{
   				c2 = '0'+nextInteger2() % 2; 
    			if(c2!=a[i])
    			{
					g2=0;
					goto l2;
    			}
  			}
 			 g2=1;
 			 l2:
			if(g1)
			{
				cout<<"LCG"<<endl;
				break;
			}
			if(g2)
			{
				cout<<"Xorshift"<<endl;
				break;
			}
		}
	}

	return 0; 
}