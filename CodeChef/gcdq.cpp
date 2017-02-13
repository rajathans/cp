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
	int t;
	cin>>t;

	while(t--) 
	{
	    int n,q;
	    cin>>n>>q;

	    vector<int> A;
	    A.resize(n);

	  	for (int i = 0; i < n; i++)
	   		cin>>A[i];

	   	vector<int> ANS;
	  	ANS.resize(q);

	   	while(q--)
	   	{
	   		int L,R;
	   		cin>>L>>R;

	   		if ( l > r)
      		{
       			cout << "1" << endl;
        		continue;
      		}

	   		A.erase(A.begin()+L-1, A.begin()+R);

	   		/*for(int i = 0; i < A.size(); i++)
   				cout<<A[i]<<", ";*/

	   		int ans;
	   		if(A.size()>1)
	   		{
				ans = A[0];

				for(int i = 1; i < n; i++)
   					ans = gcd(ans,A[i]);

   				//cout<<ans<<endl;
			}
			else
				ans = A[0];

			ANS[q]=ans;
			A = temp;

		}

		for (int i = ANS.size()-1; i >=0; i--)
			cout<<ANS[i]<<endl;
	}	

	return 0;
}