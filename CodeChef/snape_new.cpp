
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include <iomanip>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<stack>
#include<queue>
#include<cstring>
#include<map>
#include<set>
using namespace std;
string s;
int main()
{
	int T;
	int a,b;
	double re1,re2;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		re2=sqrt((double)(a*a+b*b));
		re1=sqrt((double)(-a*a+b*b));
		cout<<re1<<' '<<re2<<endl;
	}
	//system("pause");
    return 0;
}
