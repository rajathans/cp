#include <bits/stdc++.h>
using namespace std;

#ifndef MAX
#define MAX 10000002
#endif

void scanint(long long int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    for(;(c<48 || c>57);c = getchar_unlocked());
    for(;c>47 && c<58;c = getchar_unlocked()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main() 
{
	long long int n,m;
    scanint(n);
    scanint(m);
    vector <long long int> vec1(m+1,0);
    vector <long long int> vec2(m+1,0);

    vec1[0] = vec1[1] = 1;

    long long int l = 2;
    while(l<m) 
    {
        vec1[l] = (vec1[l-1] * l)%m;
        l++;
    }
        
    long long int k = 1;
    while(k<m) 
    {
        vec2[k] = (vec2[k-1] + vec1[k] * k)%m;
        k++;
    }

    long long int p = 0, an = 0, which = 0, ans = 0;
    long long int s = 0, temp = 0;

    long long int i=0;
    while(i < n)
    {
        scanint(p);
 	    if(p < m-1)
 	    	which = p;
 	    else
 	    	which = m-1;

 	    an = vec2[which];

    	s = (m * (m + 1) / 2) %m;
    	temp = ((p / m) * s)%m;
    	temp = (temp + (p % m) * (p % m + 1) / 2)%m;
    	temp = (temp*(p%m))%m;
        ans = (ans + (an + temp)%m)%m;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}