#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;

	bool sh=0,se=0,sl1=0,sl2=0,so=0;

	for(int i=0;i<str.length();i++)
	{
		if(str[i] == 'h' && sh == 0)
			sh = 1;
		if(str[i] == 'e' && se==0 && sh==1)
			se = 1;
		if(str[i] == 'l' && (sl1 == 0 || sl2 ==0) && se == 1)
		{
			if(sl1 ==1 && sl2 ==0)
				sl2 = 1;
			else if(sl1 == 0)
				sl1 ==1;
		}
		if(str[i] == 'o' && so == 0 && sl1==1 && sl2 == 1)
			so = 1;
	}

	if(sh && se && sl1 && sl2 && so == 1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
