#include <bits/stdc++.h>
using namespace std;

static struct IO {
	char tmp[1 << 10];
 
	// fast input routines
	char cur;
 
//#define nextChar() (cur = getc_unlocked(stdin))
//#define peekChar() (cur)
	inline char nextChar() { return cur = getc_unlocked(stdin); }
	inline char peekChar() { return cur; }
 
	inline operator bool() { return peekChar(); }
	inline static bool isBlank(char c) { return (c < '-' && c); }
	inline bool skipBlanks() { while (isBlank(nextChar())); return peekChar() != 0; }
 
	inline IO& operator >> (char & c) { c = nextChar(); return *this; }
 
	inline IO& operator >> (char * buf) {
		if (skipBlanks()) {
			if (peekChar()) {
				*(buf++) = peekChar();
				while (!isBlank(nextChar())) *(buf++) = peekChar();
			} *(buf++) = 0; } return *this; }
 
	inline IO& operator >> (string & s) {
		if (skipBlanks()) {	s.clear(); s += peekChar();
			while (!isBlank(nextChar())) s += peekChar(); }
		return *this; }
 
	inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this;	}
 
#define defineInFor(intType) \
	inline IO& operator >>(intType & n) { \
		if (skipBlanks()) { \
			int sign = +1; \
			if (peekChar() == '-') { \
				sign = -1; \
				n = nextChar() - '0'; \
			} else \
				n = peekChar() - '0'; \
			while (!isBlank(nextChar())) { \
				n += n + (n << 3) + peekChar() - 48; \
			} \
			n *= sign; \
		} \
		return *this; \
	}
 
defineInFor(int)
defineInFor(unsigned int)
defineInFor(long long)
 
	// fast output routines
 
//#define putChar(c) putc_unlocked((c), stdout)
	inline void putChar(char c) { putc_unlocked(c, stdout); }
	inline IO& operator << (char c) { putChar(c); return *this; }
	inline IO& operator << (const char * s) { while (*s) putChar(*s++); return *this; }
 
	inline IO& operator << (const string & s) { for (int i = 0; i < (int)s.size(); ++i) putChar(s[i]); return *this; }
 
	char * toString(double d) { sprintf(tmp, "%lf%c", d, '\0'); return tmp; }
	inline IO& operator << (double d) { return (*this) << toString(d); }
 
 
#define defineOutFor(intType) \
	inline char * toString(intType n) { \
		char * p = (tmp + 30); \
		if (n) { \
			bool isNeg = 0; \
			if (n < 0) isNeg = 1, n = -n; \
			while (n) \
				*--p = (n % 10) + '0', n /= 10; \
			if (isNeg) *--p = '-'; \
		} else *--p = '0'; \
		return p; \
	} \
	inline IO& operator << (intType n) { return (*this) << toString(n); }
 
defineOutFor(int)
defineOutFor(long long)
 
#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;

int main()
{
	//ios_base::sync_with_stdio(false);
	long long int t;
	//scanf("%lld",&t);
	cin>>t;

	while(t--)
	{
		long long int n,m;
		cin>>n;

		vector<long long int> ans(n);
		vector<long long int> areaofpolygon(n);

		long long int i = 0;
		while(i<n)
		{
			cin>>m;

			vector<long long int> x(m);
			vector<long long int> y(m);

			for(long long int j=0;j<m;j++)
			{
				//scanf("%lld %lld",&x[j], &y[j]);
				cin>>x[j]>>y[j];
			}
			long long int tempareaofpolygon = 0;
			long long int j = m-1;
			 
			for(long long int z=0;z<m;z++)
			{ 
				tempareaofpolygon = tempareaofpolygon +  (x[j]+x[z]) * (y[j]-y[z]); 
				j = z;
			}

			areaofpolygon[i] = abs(tempareaofpolygon/2);
			ans[i]=0;
			i++;
		}

		i=0;
		while(i<n)
		{	
			long long int j = i+1;
			while(j<n)
			{
				if(areaofpolygon[j]<areaofpolygon[i])
					ans[i]++;
				else if(areaofpolygon[j]>areaofpolygon[i])
					ans[j]++;
				j++;
			}
			//printf("%lld ",ans[i]);
			cout<<ans[i]<<" ";	
			i++;
		}
		//printf("\n");
		cout<<endl;
	}

	return 0;
}