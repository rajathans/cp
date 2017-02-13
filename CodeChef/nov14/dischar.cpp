#include <bits/stdc++.h>
using namespace std;

int getLongestSubstring(char s[])
{
	int count[30]={0};
  	int len=0,maxLen=0,st=0,nlen=strlen(s);
 
  	for (int i = 0; s[i]; ++i)
 	{
   		if (count[s[i] - 'a']==1 || i==(nlen-1))
 		{
 			len=i-st;
 
 			if (i==(nlen-1))
 				len++;
 
 			if (maxLen < len)
 				maxLen=len;
 
 			count[s[i] - 'a']=0;
 
 			while(s[st]!=s[i])
 			{
 				st++;
 			}

 			st++;
 		}
 
 		count[s[i]-'a']++;
 	}
 
 	return maxLen;
 
}
 
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		char s[1000];
		cin>>str;
		for (int i = 0; str[i] != '\0' ; i++)
			s[i]=str[i];
		cout<<getLongestSubstring(s)<<endl;

	}

	return 0;
}