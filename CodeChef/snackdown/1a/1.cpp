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

int main() 
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		bool sol=0;

		vector <int> c;
		vector <int> p;
		vector <int> safe;
		c.resize(n);
		p.resize(n);

		int max_each = n-1;
		int sum=0;

		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			if(c[i]>=n)
				sol = 1;
		}

		sum = accumulate(c.begin(), c.end(),0);
		//cout<<"sum:"<<sum<<endl;

		if(sum!=n)
			sol = 1;
		else
		{
			int j=1;
			for(int i=0;i<n;i++)
			{
				while(c[i]!=0) 
				{
				    p[j]=i+1;
				    c[i]-=1;
				    if(j<n-1)
				    	j+=1;
				    else
				    	j=0;
				}
			}

			for(int i=0;i<n;i++)
				cout<<p[i]<<" ";
			cout<<endl;
		}
	}

	return 0;
}

