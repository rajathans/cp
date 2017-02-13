#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	int t,type,boy[100002],girl[100002],len,ans;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>type;
		cin>>str;
		len=str.length();
		int count_boy=0,count_girl=0;
		for(int i=0;i<len;++i)
		{
			if(str[i]=='B')
				count_boy++;
			if(str[i]=='G')
				count_girl++;
		}
		char temp;
		int boy_count=0,girl_count=0;
		if(count_boy>=count_girl)
		{
			temp='B';
			for(int i=0;i<len;++i)
			{
				if(str[i]!=temp)
				{
					if(str[i]=='B')
						boy[++boy_count]=i;
					else
						girl[++girl_count]=i;
				}
				if(temp=='B')
					temp='G';
				else
					temp='B';
			}
		}
		else
		{
			temp='G';
			for(int i=0;i<len;++i)
			{
				if(str[i]!=temp)
				{
					if(str[i]=='B')
					{
						cout<<"before"<<boy_count<<endl;
						boy[++boy_count]=i;
						cout<<"after"<<boy_count<<endl;
					}
					else
						girl[++girl_count]=i;
				}
				if(temp=='B')
					temp='G';
				else
					temp='B';
			}
		}
		if(boy_count==girl_count)
		{
			if(type==0)
			{
				cout<<boy_count<<endl;
			}
			else if(type==1)
			{
				ans=0;
				for(int i=1;i<=boy_count;++i)
				{
					ans+=abs(girl[i]-boy[i]);
				}
				cout<<ans<<endl;
			}
			else
			{
				ans=0;
				for(int i=1;i<=boy_count;++i)
				{
					ans+=(girl[i]-boy[i])*(girl[i]-boy[i]);
				}
				cout<<ans<<endl;
			}
		}
		else
			cout<<"-1"<<endl;
	}
}