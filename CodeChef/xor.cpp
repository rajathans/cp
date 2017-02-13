#include <bits/stdc++.h>
using namespace std;

int main () 
{
  int t;
  while(t--) 
  {
  		vector <int> values;
  		vector <int> original;

  		int n;
  		cin>>n;

  		int count = 0;

      	values.resize(n);
      	original.resize(n);

      	int acc;

      	for(int i=0;i<n;i++)
      	{
      		values = original;
      		values.erase(values.begin()+i);
	  		acc = accumulate(values.begin(), values.end(), 0, bit_xor<int>());
	  		if(acc == 0)
	  			count++;
	  	}

	  	cout<<acc<endl;
	}
  
  return 0;
}