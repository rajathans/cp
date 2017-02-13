#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
 
int i,mm,pp;
int *w[100001];

int dijkstra(int s, int t)
{
 	int dist[mm],p[mm];
	int curr,i,k,dc,count=0;
 	int shortestdist,newdist;
 
  	for(i=0;i<=mm;i++) //init
  	{
  		p[i]=0;
   		dist[i]=MAX;
  	}
 
   	p[s] = 1; //1 = yes
   	dist[s] = 0;
   	curr = s;

   	while(curr != t)
   	{
      	shortestdist=MAX;
      	dc=dist[curr];
    	for(i=0;i<=mm;i++)
    	{
    		if(p[i] == 0) //0 = no
  			{
     			newdist = dc + w[curr][i];
 				if(newdist < dist[i])
     			{
      				dist[i]=newdist;
     			}	
     			if(dist[i] < shortestdist)
     			{
     				shortestdist = dist[i];
        			k=i;
     			}
   			}
   		}
   	
    	curr = k;
   		p[curr]=1;
 
   		if (count == pp)
   		{
       		pp=-1;
       		break;
   		}
 
   		count++;
  	}
 
  	return dist[t];
}

int main()
{
  	int j,n,m,check=0,ans;
   	for (i=0;i<100001;i++)
    	w[i]=(int*)malloc(sizeof(int)*100001);
 
 
  	scanf("%d %d",&n,&m);
    mm=n;
    pp=m+5;
    int x,y;
    
   	for (i=0;i<=n;i++)
    	for (j=0;j<=n;j++)
    	{
        	if (i == j)
            	w[i][j]=0;
        	else
        		w[i][j]=MAX;
   		}
 
   	for (j=1;j<=m;j++)
    {
      	scanf("%d %d",&x,&y);
       	if (x == 1 ||y == 1)
        	check=1;
        if (y<x)
       		w[y][x]=1;
        else
        	w[x][y]=0;
   }

   if (check == 0)
   {
        printf("-1\n");
   }

   else
   {
   		ans= dijkstra(1,n);
   		if (pp == -1)
    		printf("-1\n");
  		else
   			printf("%d\n",ans);
   }
	 
return 0;
}