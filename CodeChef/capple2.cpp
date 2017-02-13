#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	vector <int> vec;

	while(t--) 
	{
		int n;
	    cin>>n;
	    vec.resize(n);

	    for (int i = 0; i < n; ++i)
	    {
	    	cin>>vec[i];
	    }

	    int number = 0;
		for (int k = 0; k < n; ++k)
		{
     	  	short sv = num[k];
       		int i;
       		for (i = 0; i < number; ++i)
        	    if (sv == unique[i])
         	       break;

       		if (number == i)
       		{
        	    unique[number] = sv;
        	    ++number;
       		}
		}

	    cout<<number<<endl;
	}

	return 0;
}
