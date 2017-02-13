#include <iostream>
#include<cstring>
using namespace std;
unsigned int x, y, z, w; 
void srand2(unsigned S)
{
  x = S;
  y = x * S;
  z = y * S;
  w = z * S;
}
unsigned nextInteger2(void)
{
  unsigned t = x ^ (x << 11);
  x = y; y = z; z = w;
  return w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)); 
}
void generator2(int N, unsigned S, int A[])
{
  srand2(S);
  for(int i=0;i<N;i++)
  {
    A[i] = nextInteger2() % 2; 
  }
}
unsigned int X; 
void srand1(unsigned S)
{
  X = S;
}
unsigned nextInteger1(void)
{
  X = X * 1103515245 + 12345;
  return (X / 65536) % 32768;
}
void generator1(int N, unsigned S, int A[])
{
  srand1(S);
  for(int i=0;i<N;i++)
  {
    A[i] = nextInteger1() % 2; 
  }
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		char c[505];
		cin>>c;
		int g=0;
		int x1=strlen(c);
		int a[x1],b[x1];
		for(int i=0;i<x1;i++)
		{
			a[i]=c[i]-'0';
			cout<<a[i];
		}

		for(int i=0;i<=500;i++)
		{
			int f=0;
			generator1(x1,i,b);
			for(int j=0;j<x1;j++)
			if(a[j]!=b[j])
			{
				f=1;
				break;
			}
			if(f==0)
			{
				g=1;
				cout<<"LCG\n";
				break;
			}
		}
		if(g==0)
		{
			for(int i=0;i<=500;i++)
			{
				int f=0;
				generator2(x1,i,b);
				for(int j=0;j<x1;j++)
				if(a[j]==b[j])
				continue;
				else
				{
					f=1;
					break;
				}
				if(f==0)
				{
					g=1;
					cout<<"Xorshift\n";
					break;
				}
			}	
		}
	}
}