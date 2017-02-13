#include <iostream>
using namespace std;

void sort(long A[],int size)
{
	int temp;
	for(int k=1; k<=size; k++)
	{
		for(int l=k+1;l<=size;l++)
		{
			if(A[k]>A[l])
			{
				temp=A[k];
				A[k]=A[l];
				A[l]=temp;
			}
		}
	}
}

int main()
{
	int T,N,K,temp;
	cin>>T;

	long A[100];
	int UJ;

	while(T--)
	{
		cin>>N;
		for(int j=1;j<=N;j++)
		{
			cin>>A[j];
		}

		cin>>K;
		UJ=A[K];

		sort(A,N);

		for(int i=1;i<=N;i++)
		{
			if(A[i]==UJ)
			{
				UJ=i;
			}
		}

		cout<<UJ;
		cout<<"\n";
	}
	
	return 0;
}