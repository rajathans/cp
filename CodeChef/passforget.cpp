#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int t,n = 0,i,j;
	int theint;
	string s;
	vector <char> c;
	vector <char> p;

	cin>>t;

	while(t--)
	{
		cin>>n;
		c.resize(n);
		p.resize(n);

		for(i=0;i<n;i++)
		{
            cin>>c[i]>>p[i];
		}

		cin>>s;

		for (i=0;i<n;i++)
        {
            for (j=0;j<s.length();j++)
            {
                if(c[i] == s[j] && s[j]!=p[i-1])
                    {
                        s[j]=p[i];
                    }
            }
        }

        cout<<s<<endl;

        size_t found = s.find('.');
        cout<<found<<endl;

        int last;


            if(found != -1)
            {
                for(i=0;i<found;i++)
                {
                    if(s[i] != '0')
                        {
                            cout<<"front:"<<i<<endl;
                            s.erase(0,i);
                            break;
                        }
                }

                cout<<"removing front"<<endl;
                cout<<s<<endl;

                if(s[found+1] == 0)
                {
                    for(i=found;i<=s.length();i++)
                    {
                        if(s[i]=='0')
                            goto b;
                        else
                            break;
                    }
                }

                size_t found = s.find('.');
                cout<<". pos:"<<found<<endl;
                int len = s.length();
                cout<<"length:"<<len<<endl;

                for(i=s.length();i>found;i--)
                {
                     if(s[i] != '0')
                        {
                            cout<<"back:"<<i<<endl;
                            s.erase(i,s.length()-i);
                        }
                }

                cout<<"removing back"<<endl;
                cout<<s<<endl;
            }
            else
            {
                b:
                cout<<atoi(s.c_str());
            }


	}

	return 0;
}
