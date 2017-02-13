#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,i,size,temp = 0,count = 0;
	cin>>t;
	vector<int> arr;

	while(t--)
	{
		cin>>size;
		arr.resize(size);

		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}

		temp = 0;
		count = 0;

		for(i=0;i<size;i++)
		{
			if(arr[i]>temp)
				temp = arr[i];
		}

		sort(arr.begin(),arr.end());

		for (i = 0; i < size; i++)
		{
			if(arr[i] == temp)
				count++;
		}

		cout<<count<<endl;
	}

	return 0;
}
