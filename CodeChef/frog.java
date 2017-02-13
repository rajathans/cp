import java.util.*;
class frogv
{
  
    public static void main(String args[])
    {
        int j,n,k,p,a,b,i=0;
        Scanner sn=new Scanner(System.in);

        n=sn.nextInt();
        k=sn.nextInt();
        p=sn.nextInt();

        int arr[]=new int[n];
        int adjc[][]=new int[n][n];

        while(i<n)
        {
            arr[i]=sn.nextInt();
            for(j=0;j<i;j++)
            {
                if((Math.abs(arr[j]-arr[i]))<=k)
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
    }
}