#include <bits/stdc+.h>
using namespace std;

int main() 
{
	int k,T,M;
	cin>>k;

	while(k--)
	{
	    cin>>T;
	    cin>>N>>M;

	    int a[N][M];
	    int small;

	    for(int i=0;i<N;i++)
	    {
	    	small = a[i][0];
	    	for(int j=0;j<M;j++)
	    	{
	    		cin>>bus[i][j];
	    		if(bus[i][j]<small)
	    			small=bus[i][j];
	    	}
	    }
	}

	return 0;
}