#include<bits/stdc++.h>
using namespace std;

#define MAXN 100000
#define PB push_back
#define FOR(i,a,b) for(i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

class data
{
public:
    int x,sn;
    data(int a,int b)
    {
        sn=a;
        x=b;
    }

    bool operator<(const data &b) const
    {
        return x<b.x;
    }
};

vector<data> a;
int poss[MAXN],gp[MAXN];

int main()
{
	ios_base::sync_with_stdio(false);
    int n,k,p,i;
    int x,y;

    scanf("%d %d %d",&n,&k,&p);

    REP(i,n)
    {
        scanf("%d",&x);
        a.PB(data(i,x));
    }

    sort(a.begin(),a.end());


    REP(i,n)
    {
        poss[a[i].sn]=i;
    }

    x=0;
    gp[a[0].sn]=0;

    FOR(i,1,n)
    {
        if((a[i].x-a[i-1].x)>k)
        {
            ++x;
        }

        gp[a[i].sn]=x;
    }

    REP(i,p)
    {
        scanf("%d %d",&x,&y);
        --x;
        --y;

        if(gp[x]==gp[y])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }


	return 0;
}