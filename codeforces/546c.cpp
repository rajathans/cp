#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;

	int k1,k2;
	vector <int> first;
	vector <int> second;
	
	int temp = 0;

	cin>>k1;

	for(int i=0;i<k1;i++)
	{
		cin>>temp;
		first.push_back(temp);
	}

	cin>>k2;

	for(int i=0;i<k2;i++)
	{
		cin>>temp;
		second.push_back(temp);
	}

	int one,two;
	vector <int> safe1;
	safe1=first;

	vector <int> safe2;
	safe2=second;
	int steps = 0;
	int flight = 0;

	while (first.size()!=0 && second.size()!=0)
	{
		one = first[0];
		two = second[0];

		if (two>one)
		{
			first.erase(first.begin());
			second.erase(second.begin());
			second.push_back(one);
			second.push_back(two);
			flight++;
		}

		else
		{
			second.erase(second.begin());
			first.erase(first.begin());
			first.push_back(two);
			first.push_back(one);
			flight++;
		}

		steps++;

		if((safe2==second || safe1==first) && steps>2)
		{
			cout<<"steps:"<<steps<<endl;
			cout<<"-1"<<endl;
			return 1;
		}
	}
	if (first.size()==0)
		cout<<flight<<" "<<"2"<<endl;
	else
		cout<<flight<<" "<<"1"<<endl;

	return 0;
}

