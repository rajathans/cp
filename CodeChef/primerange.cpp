#include <cstdio>
#include <cmath>
#define gc getchar_unlocked
#define pc putchar_unlocked
inline void si(int &x)
{
	register int c = gc();
	x=0;
	int neg=0;
	for(;((c<48 || c>57) && c != '-');c = gc());
	if(c=='-') {neg=1;c=gc();}
	for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
	if(neg) x=-x;
}
 
inline void pi(int n)
{
	int i=0;
	char ch[25];
	if(n<=0) 
	{
		if(n==0) pc('0');
		else pc('-'),n=n*-1;
	}
	while(n>0) 
		ch[i]=(n%10)+'0',n=n/10,i++;
	while(i>0)
		pc(ch[i-1]),i--;
}
 
int primes[5500], k;
 
void sieve()
{
	primes[0] = 2;
	k = 0;
	for(int i=3; i<=31991; i++)
	{
		bool flag = 1;
		int sq = sqrt(i) + 1;
		for(int j=0; j <= k; j++)
		{
			if(primes[j] >= sq)  
				break;
			if(i%primes[j] == 0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
			primes[++k]=i;
	}
}
 
int main()
{
	sieve();
	int t;
	si(t);
	while(t--)
	{
		int m,n;
		si(m);si(n);
		if(m == 1)
			m++;
		for(; m <= n; m++)
		{
			bool flag = 0;
			int sq = sqrt(m);
			for(int i=0; primes[i] <= sq; i++)
			{
				if(m%primes[i] == 0)
				{
					flag=1;
					break;
				}
			}
			if(flag == 0)
			{
				pi(m);pc('\n');
			}
		}
		pc('\n');
	}
	return 0;
}