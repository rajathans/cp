#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int i;
    long int n;
    vector <int> A;
    vector <int> count;
	cin>>n;

	A.resize (n);
    count.resize(n);

    for (i=0; i <n; i++)
    {
        cin>>A[i];
        count[i]=0;
    }

	for (i = 0; i < n ; i++)
	{
        if(A[i]!=0 && i==0)
        {
            count[i]=1;
        }

        else if(A[i]!=0 && i>0)
        {
            count[i]=count[i-1]+1;
        }
    }

    cout << *max_element(count.begin(),count.end());
	return 0;
}
