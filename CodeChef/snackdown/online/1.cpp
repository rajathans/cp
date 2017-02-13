#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked 

//fast I/O
void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

bool isPrime(int number)
{	
	int i;

	if(number == 1)
		return false;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}

bool isDivBy9(int n)
{
    if (n == 0 || n == 9)
        return true;
    if (n < 9)
        return false;
 
    return isDivBy9((int)(n>>3) - (int)(n&7));
}

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		if(n%9==0)
		{
			cout<<"0"<<endl;
			break;
		}
		else
		{
			
		}
	}

	return 0;
}

