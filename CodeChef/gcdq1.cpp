#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	long long int t;
	scanf("%lld",&t);

	while(t--) 
	{
	    long long int n,q;
	    scanf("%lld %lld",&n,&q);

	    vector<long long int> A;
	    A.resize(n);
	    vector<long long int> temp;

	  	for (long long int i = 0; i < n; i++)
	   		scanf("%lld",&A[i]);

	   	/*vector<int> ANS;
	  	ANS.resize(q);*/

	  	temp = A;

	   	while(q--)
	   	{
	   		long long int L,R;
	   		scanf("%lld%lld",&L,&R);

	   		if ( L > R)
     		{
        		cout << "1" << endl;
        		continue;
      		}

	   		A.erase(A.begin()+L-1, A.begin()+R);

	   		long long int ans;

	   		if(A.size()>1)
	   		{
				ans = A[0];

				for(long long int i = 1; i < A.size(); i++)
   					ans = gcd(ans,A[i]);
			}
			else if(A.size()==1)
			{
				ans = A[0];
   			}

			printf("%lld\n", ans);
			A = temp;

		}
	}	

	return 0;
}