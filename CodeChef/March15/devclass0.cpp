#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX 1000001
#endif

int main()
{
	ios_base::sync_with_stdio(false);
	long long int t;
	cin>>t;

	while(t--) 
	{
		long long int cost,i=0;
		string first;
		char second[MAX];

		long long int countboys = 0, countgirls = 0;
	    cin>>cost>>first;

		while(second[i]=first[i])
		{
			if(first[i]=='B')
				countboys++;
			i++;
		}
		countgirls=i-countboys;

		i = 0;

		if(countgirls>countboys+1 || countboys>countgirls+1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else if(countgirls>countboys)
		{
			long long int costfn = 0, i = 0;
			long long int l = countboys+countgirls,temp1 = 0,temp2=0;

			if(cost==0)
			{
				for(i=0;i<l;i++)
				{
					if(i%2 == 0)
					{
						if(first[i]=='B')
						{
							first[i]='G';
							costfn++;
						}
		 
					}
		 
					if(i%2 == 1)
					{
						if(first[i]=='G')
						{	
							first[i]='B';
		 					costfn++;
						}
					}
				}
				costfn=costfn/2;
			}
		 
			else
			{
		 		for(i=0;i<l;i++)
				{
					if(i%2==0)
					{
						if(first[i]=='B')
						{
							if(temp1<i+1)
								temp1=i+1;
							while(first[temp1]=='B')
								temp1++;
							first[i]='G';
							first[temp1]='B';
							costfn=costfn + temp1 - i;
						}
		 
					}
		 
					if(i%2==1)
					{
						if(first[i]=='G')
						{	
							if(temp2<i+1)
								temp2=i+1;
							while(first[temp2]=='G')
								temp2++;
							first[i]='B';
							first[temp2]='G';
							costfn=costfn+temp2-i;
						}
		 
					}
				}
			}

			cout<<costfn<<endl;
		}
		else if(countboys>countgirls)
		{
			long long int costfn = 0, i = 0;
			long long int l = countboys+countgirls,temp1 = 0,temp2=0;

			if(cost==0)
			{
				for(i=0;i<l;i++)
				{
					if(i%2 == 0)
					{
						if(first[i]=='G')
						{
							first[i]='B';
							costfn++;
						}
		 
					}
		 
					if(i%2 == 1)
					{
						if(first[i]=='B')
						{	
							first[i]='G';
		 					costfn++;
						}
					}
				}
				costfn=costfn/2;
			}
		 
			else
			{
		 		for(i=0;i<l;i++)
				{
					if(i%2==0)
					{
						if(first[i]=='G')
						{
							if(temp1<i+1)
								temp1=i+1;
							while(first[temp1]=='G')
								temp1++;
							first[i]='B';
							first[temp1]='G';
							costfn=costfn + temp1 - i;
						}
		 
					}
		 
					if(i%2==1)
					{
						if(first[i]=='B')
						{	
							if(temp2<i+1)
								temp2=i+1;
							while(first[temp2]=='B')
								temp2++;
							first[i]='G';
							first[temp2]='B';
							costfn=costfn+temp2-i;
						}
		 
					}
				}
			}

			cout<<costfn<<endl;
		}
		else
		{
			long long int ans1,ans2;
			long long int costfn = 0, i = 0;
			long long int l = countboys+countgirls,temp1 = 0,temp2=0;

			if(cost==0)
			{
				for(i=0;i<l;i++)
				{
					if(i%2 == 0)
					{
						if(first[i]=='B')
						{
							first[i]='G';
							costfn++;
						}
		 
					}
		 
					if(i%2 == 1)
					{
						if(first[i]=='G')
						{	
							first[i]='B';
		 					costfn++;
						}
					}
				}
				costfn=costfn/2;
			}
		 
			else
			{
		 		for(i=0;i<l;i++)
				{
					if(i%2==0)
					{
						if(first[i]=='B')
						{
							if(temp1<i+1)
								temp1=i+1;
							while(first[temp1]=='B')
								temp1++;
							first[i]='G';
							first[temp1]='B';
							costfn=costfn + temp1 - i;
						}
		 
					}
		 
					if(i%2==1)
					{
						if(first[i]=='G')
						{	
							if(temp2<i+1)
								temp2=i+1;
							while(first[temp2]=='G')
								temp2++;
							first[i]='B';
							first[temp2]='G';
							costfn=costfn+temp2-i;
						}
		 
					}
				}
			}

			ans1 = costfn;	

			costfn = 0;
			i = 0;
			l = countboys+countgirls;
			temp1 = temp2=0;

			if(cost==0)
			{
				for(i=0;i<l;i++)
				{
					if(i%2 == 0)
					{
						if(second[i]=='G')
						{
							second[i]='B';
							costfn++;
						}
		 
					}
		 
					if(i%2 == 1)
					{
						if(second[i]=='B')
						{	
							second[i]='G';
		 					costfn++;
						}
					}
				}
				costfn=costfn/2;
			}
		 
			else
			{
		 		for(i=0;i<l;i++)
				{
					if(i%2==0)
					{
						if(second[i]=='G')
						{
							if(temp1<i+1)
								temp1=i+1;
							while(second[temp1]=='G')
								temp1++;
							second[i]='B';
							second[temp1]='G';
							costfn=costfn + temp1 - i;
						}
		 
					}
		 
					if(i%2==1)
					{
						if(second[i]=='B')
						{	
							if(temp2<i+1)
								temp2=i+1;
							while(second[temp2]=='B')
								temp2++;
							second[i]='G';
							second[temp2]='B';
							costfn=costfn+temp2-i;
						}
		 
					}
				}
			}

			ans2 = costfn;
			cout<<min(ans2,ans1)<<endl;
		}
	}

	return 0;
}