#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	String normal[200],jhool[200];

	cin>>t;

	while(t--)
	{
		cin>>normal;
		for(int i = 0; i < normal.length(); i++)
		{
			if(normal[i] != 'a' || normal[i] != 'e' || normal[i] != 'o' || normal[i] != 'u')
			{
				normal[i]=' ';
			}
		}

		cout<<normal;
	}

	return 0;
}