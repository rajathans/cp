#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int n,k,sum=0;
		vector <bool> flag;
		vector <long long int> vec;

		cin>>n>>k;

		vec.resize(n);
		flag.resize(n);

		fill(flag.begin(), flag.end(),1);
	
		for(int i=0;i<n;i++)
			cin>>vec[i];

		sum = accumulate(vec.begin(),vec.end(),0);
 
		long long int val=sum/k,minm=val;

		if(sum%k!=0)
		{
			cout<<"no"<<endl;
			continue;
		}

		sort(vec.begin(), vec.end());
 		
 		int i=0;
		while(i<k)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(flag[j]==1)
				{
					if(minm>=vec[j])
					{
						minm=minm-vec[j];
						flag[j]=0;
					}

					else
						continue;
				}
			}

			if(minm != 0)
			{
				cout<<"no"<<endl;
				break;
			}

			minm=val;
			i++;
		}

		if(i==k) 
			cout<<"yes"<<endl;
	}
	return 0;
}
