#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX 999999999
#endif

bool myfunction (int i,int j) 
{ 
	return (i<j); 
}

int main()
{
	long long int t;
	cin>>t;

	while(t--) 
	{
		vector <long long int> vec;
    	long long int tempInt;
    	int maxloc = 0 ,minloc = 0;

    	cin >> tempInt;
   		vec.push_back(tempInt);

    	vector<long long int>::iterator elementLocation = vec.begin();
    	while(elementLocation != vec.end())
        	elementLocation ++;

        int len = vec.size();

        stable_sort(vec.begin(), vec.end());
       	
       	for (int i = 0; i < len; i++)
       		cout<<vec[i];
    }

	return 0;
}