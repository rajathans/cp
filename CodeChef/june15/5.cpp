#include<bits/stdc++.h>
using namespace std;

long long C(int num, int r) 
{
    if(r > num / 2) r = num - r;
    long long ans = 1;
    int i;
 
    for(i = 1; i <= r; i++) {
        ans *= num - r + i;
        ans /= i;
    }
 
    return ans;
}
 
int main()
{	
	int t;
	scanf("%d",&t);
	while(t--)
	{	
		int n,q;
		string s;
		scanf("%d%d",&n,&q);
		cin>>s;

		vector <int> a;
		a.resize(100005);
 
		map<string,int>m;
		map<string,int>::iterator it;

		string p;

		for(int i=0;i<n;++i)
		{
			for(int j=1;j+i<=n;++j)
			{	
				p=s.substr(i,j);
				m[p]++;
				cout<<p<<endl;
			}
		}

		for(it=m.begin();it!=m.end();it++)
			{		
				cout<<it->first<<": "<<it->second<<endl;
			}
 
		for(int i=0;i<q;i++)
		{	scanf("%d",&a[i]);
			int count=0;
			for(it=m.begin();it!=m.end();it++)
			{		
				if(a[i]<=it->second)
					count+=C(it->second,a[i]);
			}
			printf("%d\n",count);
		}
 
	}
	return 0;
}
