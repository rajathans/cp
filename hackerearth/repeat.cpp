#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

bool isPrime(int number)
{	
	int i;

	if(number == 1)
		return false;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}

int main() 
{
	int tc;
	cin>>tc;
	int a,b,c,d,e,f,g,h,ii,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	a=b=c=d=e=f=g=h=ii=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=0;
	while(tc--)
	{
		int flag = 0;
		string str;
		cin>>str;

		for(int i=0;i<=n;i++)
		{
			if(str[i] == 'a')
				a++;
			else if(str[i] == 'b')
				b++;
			else if(str[i] == 'c')
				c++;
			else if(str[i] == 'd')
				d++;
			else if(str[i] == 'e')
				e++;
			else if(str[i] == 'f')
				f++;
			else if(str[i] == 'g')
				g++;
			else if(str[i] == 'h')
				h++;
			else if(str[i] == 'i')
				ii++;
			else if(str[i] == 'j')
				j++;
			else if(str[i] == 'k')
				k++;
			else if(str[i] == 'l')
				l++;
			else if(str[i] == 'm')
				m++;
			else if(str[i] == 'n')
				n++;
			else if(str[i] == 'o')
				o++;
			else if(str[i] == 'p')
				p++;
			else if(str[i] == 'q')
				q++;
			else if(str[i] == 'r')
				r++;
			else if(str[i] == 's')
				s++;
			else if(str[i] == 't')
				t++;
			else if(str[i] == 'u')
				u++;
			else if(str[i] == 'w')
				w++;
			else if(str[i] == 'x')
				x++;
			else if(str[i] == 'y')
				y++;
			else if(str[i] == 'z')
				z++;

			if(a >1 || b>1 || c>1|| d>1|| e>1||f>1||g>1||h>1||ii>1||j>1||k>1||l>1||m>1||n>1||o>1||p>1||q>1||r>1||s>1||t>1||u>1||v>1||w>1||x>1||y>1||z>1)
			{
				flag = 1;
				goto l;
			}
		}

		l:
		if (flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

