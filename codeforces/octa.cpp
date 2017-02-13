#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> c;
	int sum=0;
	c.resize(5);
	for(int i=0;i<5;i++)
	{
		cin>>c[i];
		sum+=c[i];
	}
	int average;
	if(sum!=0)
	{
	average = sum/5;
	if(average*5==sum)
		cout<<average<<endl;
	else
		cout<<"-1"<<endl;
	}
	else
		cout<<"-1"<<endl;

	return 0;
}
