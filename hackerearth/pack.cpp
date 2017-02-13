#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n_mov,n_box,tot=0;

	cin>>n_mov;
	cin>>n_box;

	vector<int> vec(n_box);

	for(int i=0;i<n_box;n++)
	{
		cin>>vec[i];
		total+=vec[i];
	}

	avg = total/n_mov;

	
