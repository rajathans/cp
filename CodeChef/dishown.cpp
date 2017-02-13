#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

int dish[MAX],sc[MAX];

int getdish(int position)
{
    while(dish[position]!=position)
    {
        position=dish[position];
    }
    return position;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n,t,i,x,y,fl,q,ti;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i = 0; i <n;++i)
        {
            scanf("%d",sc+i);
            dish[i]=i;
        }

        scanf("%d",&q);

        while(q--)
        {
            scanf("%d",&fl);

            if(fl==1)
            {
                scanf("%d",&x);
                --x;
                printf("%d\n",getdish(x)+1);
            }
            else
            {
                scanf("%d %d",&x,&y);
                --x;
                --y;
                x=getdish(x);
                y=getdish(y);

                if(x==y)
                {
                    printf("Invalid query!\n");
                    continue;
                }

                if(sc[x]>sc[y])
                {
                    dish[y]=x;
                }
                else if(sc[x]<sc[y])
                {
                    dish[x]=y;
                }
            }
        }
    }


	return 0;
}