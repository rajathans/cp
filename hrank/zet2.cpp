#include <bits/stdc++.h>
using namespace std;

#define pc(x) putchar_unlocked(x);
#define gc getchar_unlocked
 
void scanint(int &x) // int integer
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

bool isPrime(int x) 
{
    for(int i=2; i<= sqrt(x); i++) 
    {
        if ((x%i) == 0)
            return false;
    }

    return true;
}

int findsum(int no)
{
  return no == 0 ? 0 : no%10 + findsum(no/10) ;
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str1,str2,org1,org2;
		cin>>str1>>str2;

		org1 = str1;
		org2 = str2;

		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());

		stoi()


	}

	return 0;
}
