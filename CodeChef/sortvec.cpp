#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector> 
using namespace std;

int main()
{
	int i;
	 vector<int> A;
	 A.resize(10);
	 for(i=0;i<10;i++)
     	cin>>A[i];
     sort(A.begin(),A.end());
     for(i=0;i<10;i++)
     	cout<<A[i];
     return 0;

 }