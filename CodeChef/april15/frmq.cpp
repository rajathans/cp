#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked

void scanint(int &x)
{
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-')
	{ 
		neg = 1; c = gc();
	}
	for(; c>47 && c<58; c=gc())
	{ 
		x = (x<<1)+(x<<3)+c-48; 
	}
	if(neg)	
		x=-x;
}

int i = 0, sum = 0, num = 0;
int m,x,y,k;
int mini,maxi;
vector <int> arr;

void solve()
{
		k = 0;
	    mini = min(x,y);
	    maxi = max(x,y);
	    k = mini;
	    mini--;
	    num = arr[k];
	    i=k+1;
	    while(i<=maxi) 
	    {
	        if (arr[i]>num)
	        	num = arr[i];
	        i++;
	    }
	    sum+=num;
}

int main()
{
	int n;
	scanint(n);
	arr.resize(n);
	
	for(int i = 0; i < n; i++)
		scanint(arr[i]);

	scanint(m);
	scanint(x);
	scanint(y);

	while(m--) 
	{
	    solve();
	    x = ((x+7) % (n-1));
		y = ((y+11) % n);
		if ((x>=0 or x<=n-1 or y>=0 or y<=n-1) == 0)
			break;
	}
	printf("%d\n", sum);
	return 0;

}