#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		char str[100010];
		int arr[27] = {false};
		vector <int> v(arr, arr + sizeof arr / sizeof arr[0]);

		cin>>str;

		int i=0;
		while(str[i]!='\0') 
		{
			v[str[i]-97] = true;
		    i++;
		}

		cout<<accumulate(v.begin(), v.end(),0)<<endl;
	}
	return 0;
}
