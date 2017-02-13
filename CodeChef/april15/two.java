import java.util.*;
import java.lang.*;
import java.io.*;

class two {

public static void main(String[] args) {

  int arr[] = new int[100005];
  int logtwo[] = new int[100005];
  int M[][] = new int[30][100005];
  int pow2[] = new int[30];
  int n, m, x, y;
  Scanner  scan = new Scanner(System.in);
  n = scan.nextInt();
  for (int i=0; i<n; i++) {
    arr[i] = scan.nextInt();    
  }

    int i, j;
    pow2[0] = 1;
    for(i=1;i<30;i++)
        pow2[i] = pow2[i - 1] << 1;
    logtwo[1] = 0;
    for(i=2;i<n+1;i++)
        logtwo[i] = logtwo[i >> 1] + 1;
    for(i=0;i<n;i++)
        M[0][i] = i;
    for(j = 1; pow2[j] < n; ++j)
        for(i = 0; i + pow2[j] <= n; ++i)
            M[j][i] = arr[M[j-1][i]] >= arr[M[j - 1][i + (pow2[j - 1])]] ? M[j - 1][i] : M[j - 1][i + (pow2[j - 1])];

    m = scan.nextInt();
    x = scan.nextInt();
    y = scan.nextInt();

    int ans = 0;
    while(m-1>0)
    {
      int k = logtwo[Math.max(x,y) - Math.min(x,y)];
    int temp = arr[M[k][Math.min(x,y)]] >= arr[M[k][Math.max(x,y) - (pow2[k]) + 1]] ? M[k][Math.min(x,y)] : M[k][Math.max(x,y) - (pow2[k]) + 1];
      ans += arr[temp];
        x = x + 7;
        if(x>=n-1)
          x%=n-1;
        y = y + 11;
        if(y>=n)
          y%=n;
    }

    System.out.println(ans);
}

}