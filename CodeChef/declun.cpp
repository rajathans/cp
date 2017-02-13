#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,X,Y;
	cin>>n>>X>>Y;

	int sum =0;

	int A[n],B[n];

	for (int i = 0; i < n; i++)
		cin>>A[i];

	for (int i = 0; i < n; i++)
		cin>>B[i];

	for (int i = 0; i < n; i++)
	{
		if(A[i]>=B[i] && X!=0 || A[i]==B[i] && Y==0)
		{
			X--;
			sum += A[i];
		}

		if(B[i]>A[i] && Y!=0 || B[i]==A[i] && X==0)
		{
			Y--;
			sum += B[i];
		}
	}

	cout<<sum<<endl;

	return 0;
}