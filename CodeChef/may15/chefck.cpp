#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked

#ifndef MOD
#define MOD 1000000007
#endif

#ifndef lld
#define lld long long int
#endif

lld superpower(lld x, lld y, lld s)
{
    if( y == 0) return 1;
    else if(y==1) return x%s;  
    else if (y%2 == 0) return (superpower(x, y/2,s)*superpower(x, y/2,s))%s;
    else return (((x*superpower(x, y/2,s))%s)*superpower(x, y/2,s))%s;
}
 
void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}

int main()
{
	ios_base::sync_with_stdio(0);
	 vector <lld> vec;
	 int n,k,q,i,j,x,v=0;
	 scanint(n);
	 scanint(k);
	 scanint(q);
	 int a,b,c,d,e,f,r,s,t,m;
	 scanint(a);
	 scanint(b);
	 scanint(c);
	 scanint(d);
	 scanint(e);
	 scanint(f);
	 scanint(r);
	 scanint(s);
	 scanint(t);
	 scanint(m);
	 scanint(v);
	 vec.push_back(v);
	 int l1,la,lc,lm,d1,da,dc,dm;
	 scanint(l1);
	 scanint(la);
	 scanint(lc);
	 scanint(lm);
	 scanint(d1);
	 scanint(da);
	 scanint(dc);
	 scanint(dm);
	 int u =0;

	 for(x=2;x<=n;x++)
	 {
	   if((superpower(t,x,s)%s)<=r)
	      u=((((a*v)%m)*v)%m+(b*v)%m+c%m)%m;
	   else
	      u=((((d*v)%m)*v)%m+(e*v)%m+f%m)%m;
	   v=u;	
	   vec.push_back(v);		
	 }
 	
 	int mul=1,ans=0;
 
	for(i=0;i<q;i++)
	 {
	   l1=((la*l1)%lm+lc)%lm;
	   d1=((da*d1)%dm+dc)%dm;
	   int min;
	   if((l1+k+d1)>=n)
	  		min = *min_element(vec.begin()+l1,vec.begin()+n);
	   else 
	   		min = *min_element(vec.begin()+l1,vec.begin()+l1+k+d1);
		 //cout<<min<<endl;
		 ans+=min;
		 mul=(mul*min)%MOD;	
	 }   
	 printf("%d %d\n", ans,mul%MOD);
	return 0;
}