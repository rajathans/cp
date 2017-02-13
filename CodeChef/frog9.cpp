#include <bits/stdc++.h>
using namespace std;

int int main(int argc, char const *argv[])
{
	int j,n,k,p,a,b,i=0;
	cin>>n>>k>>p;

	int arr[]=new int[n];
    int adjc[][]=new int[n][n];

    while(i<n)
   	{
        cin>>arr[i];
        for(j=0;j<i;j++)
        {
            if((abs(arr[j]-arr[i]))<=k)
            {
                adjc[i][j]=adjc[j][i]=1;
            }
        }
        i++;
    }


    while(p-->0)
       {
           a=sn.nextInt();
           b=sn.nextInt();

           int visited[]=new int[n];

           if(pathexists(adjc,n,a-1,b-1,visited))
           {
                System.out.println("Yes");    
           }
           else
           {
               System.out.println("No");
            }
 
        }


	return 0;
}