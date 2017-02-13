#include <bits/stdc++.h>

#ifndef mod
#define mod 1000000000
#endif

#define lld long long int

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
        if (skipBlanks()) { s.clear(); s += peekChar();
            while (!isBlank(nextChar())) s += peekChar(); }
        return *this; }
 
    inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this; }
 
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

#define gc getchar_unlocked
void scanint(lld &x)
{
    register lld c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

vector< vector<lld> > ans(2009, vector<lld>(2009));
vector< vector<lld> > cnr(4009, vector<lld>(4009));

void init(lld l)
{
    lld j=1;
    while(j<=l)
    {
        ans[0][j] = cnr[l+j-1][l-1];
        j++;
    }
}

void answ(lld k,lld b)
{
    lld i=2; 
        while(i<=k) 
        {
            lld j=b; 
            while(j>=0)
            {   
                if(j==b)
                    ans[i][j] = (ans[i-1][j]*ans[0][j])%mod;
                else
                    ans[i][j] = (ans[i][j+1]+ans[i-1][j]*ans[0][j])%mod;
                j--;
            }
            i++;
        }
}

int main()
{
    lld t;
    lld i;

    i=0; 
    while(i<4009)
    {
        cnr[i][0] = 1;
        cnr[i][i] = 1;
        i++;
    }

    i=1;
    while(i<4006)
    {
        lld temp=0;
        if(i<2006)
            temp=i;
        else
            temp=2006;
        for(lld j=1; j<temp; j++)
        {
            if(i!=j)
                cnr[i][j] = (cnr[i-1][j-1]+cnr[i-1][j])%mod;
        }
        i++;
    }


    /*t = lld(input())
    while t>0:
    t-=1
    su=0
    n,m = list(map(lld, input().split()))
    ans[0][0]=1

    j=1
    while j<=m:
        ans[0][j] = cnr[m+j-1][m-1]
        j+=1

    ans[1][m]=ans[0][m]

    i=m
    while i>0:
        ans[1][i-1] = (ans[0][i-1]+ans[1][i])%mod
        i-=1

    i = 2
    while i<=n:
        j=m
        while j>=0:
            ans[i][j] = (ans[i-1][j]*ans[0][j])%mod if j==m else (ans[i][j+1]+ans[i-1][j]*ans[0][j])%mod
            j-=1
        i+=1
    prlld((ans[n][0]))*/

    scanint(t);
    while(t--)
    {
        lld n, m;
        scanint(n);
        scanint(m);
        
        ans[0][0] = 1;
    
        lld j=1;
        init(m);
 
        ans[1][m] = ans[0][m];

        i=m; 
        while(i>0)
        {
            ans[1][i-1] = (ans[0][i-1]+ans[1][i])%mod;
            i--;
        }
 
        answ(n,m);
        lld answer = ans[n][0];
        printf("%lld\n",answer);
    }       
    return 0;
}