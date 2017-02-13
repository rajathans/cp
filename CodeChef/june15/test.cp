    #include <iostream>
    #include<algorithm>
    #include<vector>
    using namespace std;
    typedef long long int ll;
    #include<math.h>
    
    int main() {
    	// your code goes here
    	ll t;
    	cin>>t;
    	
    	while(t--)
    	{
    	ll n;
    	cin>>n;
    	ll su=n;
    	ll area[n]={0};
    	ll j=0;
    	vector<pair<int, int> >vec;
    	while(su--)
    	{
    	ll x;
    	cin>>x;
    	ll xa[x],ya[x];
    	for(ll i=0;i<x;i++)
    	cin>>xa[i]>>ya[i];
    	ll sum=0;
    	for(ll i=0;i<x-1;i++)
    	sum=(sum+(xa[i]*ya[i+1])-(ya[i]*xa[i+1]));
    	sum=sum+xa[x-1]*ya[0]-ya[x-1]*xa[0];
    	sum=sum/2;
    	if(sum<0)
    	sum=-sum;
    	vec.push_back(make_pair(sum,j));
    	j++;
    	}
        sort(vec.begin(),vec.end()); 
        for(ll i=0;i<n;i++)
        {
        	ll ind=vec[i].second;
        	area[ind]=i;
        }
        for(ll i=0;i<n;i++)
        cout<<area[i]<<" ";
        cout<<endl;
    	}
    	return 0;
    } 