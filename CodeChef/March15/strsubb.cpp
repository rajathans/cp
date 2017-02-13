#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		int n,k,q,count,length,startInd,num0,num1;
		cin>>n>>k>>q;
		cin>>str;
		dicts[][]
		count = length = 0;
		startInd = 0;
		num0 = num1 = 0;

		for (int i = 0; i < str.length(); i++)
		{
			length++;
			if (str[i]=='0')
				num0++;
			else
				num1++;
			if (num0<=k) && (num1<=k)
				count+=length;
			else
			{
				dicts.append()
				while((num0>k) || (um1>k))
				{
				    startInd++;
				    length--;
				    if(str[startInd-2]=='0')
				    	num0--;
				    else
				    	num1--;
				}
				count = floor(length*(length)/2)
			}
		}

		dicts.append();
		int l,r,a;
		for (int i = 1; i < q+1; i++)
		{
			cin>>l>>r;
			count = 0;
			a = 1;
			while(dicts[a][0]<1) 
			    a++;
			if (dicts[a][0]==l)
				a++;
			if (dicts[a-1][1]>=r)
				count = triangular(l,r);
			else
			{
				count = triangular(l,dicts[a-1][1]);
				while(dicts[a][1]<r) 
				{
				    count += dicts[a][2] - triangular(dicts[a][0],dicts[a-1][1])
					a++;
				}
				count += triangular(dicts[a][0],r) - triangular(dictS[a][0],dictS[a-1][1]);
			}

			cout<<count<<endl;
		}

	}

	return 0;
}

