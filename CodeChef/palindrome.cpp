#include<bits/stdc++.h>
using namespace std;

int rev(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}

int main()
{
	int t,p,i;
	cin>>t;

	while(t--)
	{
		cin>>p;
		cout<<rev(p);
	}

	return 0;
}