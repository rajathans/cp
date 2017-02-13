#include <bits/stdc++.h>
using namespace std;

int main() 
{
		string str;
		cin>>str;
		int dash = 0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i] == '2' || str[i] == '3' || str[i] == '5')
				dash += 5;
			else if(str[i] == '1')
				dash += 2;
			else if(str[i] == '4' || str[i] == '7')
				dash += 4;
			else if(str[i] == '6' || str[i] == '9' || str[i] =='0')
				dash += 6;
			else
				dash+=7;
		}

		cout<<dash<<endl;

		return 0;
}

