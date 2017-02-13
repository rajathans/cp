#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,count = 0,n,k;
  string str;
  string s2="Click";
  string s3="Close";

  cin>>t;

  while(t--)
  {
  	cin>>n>>k;
  	count = 0;

  	for(int i=0;i<k;i++)
  	{
  		cin>>str[i];
  		if((str.find(s2) != string::npos)) 
  		    count++;
  		else if((str.find(s3) != string::npos))
  			count=0;
  	}

  	cout<<count<<endl;
  }

  return 0;
}