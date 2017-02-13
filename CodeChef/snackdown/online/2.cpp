#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked 

//fast I/O
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
	ios_base::sync_with_stdio(false);
	string str;
	cin>>str;
	vector<char> data(str.begin(), str.end());
	int i,j,k,l;
	cin>>i>>j>>k>>l;
	reverse(data.begin()+i, data.begin()+j);
	cout<<str<<endl;
	return 0;
}

