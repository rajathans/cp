#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;
typedef pair < int, int > pii;
typedef vector < int > vii;
 
#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define s(n) cin >> n
#define csl ios_base::sync_with_stdio(false); cin.tie(NULL)
#define rsz(x,n) x.clear(); x.resize(n)
#define rrsz(x,a,n) x.clear(); x.resize(n,a)
#define wt while(true)
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ls(x) ((2*(x)) + 1)
#define rs(x) ((ls(x)) + 1)
#define md(a,b) (((a) + (b))/2)
#define INF (1e9 + 7)

bool compare1(pair<ll,ll> a, pair<ll, ll> b){
			return a.first>b.first;
	
}
bool compare2(pair<ll,ll> a, pair<ll, ll> b)
{
			return a.second<b.second;
}
 
int main(){
	ll t;
	ll n;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector< pair<ll,ll> > v;
		std::vector< pair <ll,ll> > v1[100010];
		std::vector< pair <ll,ll> > v2[100010];
		rep(i,n)
		{
			ll x;
			ll max_x = 0;
			ll max_y = 0;
			ll min_x = INF;
			ll min_y = INF;
 
			cin>>x;
			rep(j,x)
			{
				ll y,z;
				cin>>y>>z;
				min_x = min_x > y ? y:min_x;
			}
			v.pb(make_pair(min_x,i));
			cout<<"min:"<<min_x<<" "<<i<<endl;
		}
		sort(v.begin(),v.end(),compare1);
		ll arr[100010]={0};

		rep(i,n)
		{	
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}

		rep(i,n)
		{
			int flag = 0;
			ll ans = 0;
			arr[v[i].second]=i;
		}

		rep(i,n)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}  