import java.io.*;
import java.util.*;
 
class retpo
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        for(int i=1;i<=T;i++)
        {
        	String s[] = br.readLine().split(" ");
            long x = Long.parseLong(s[0]);
            long y = Long.parseLong(s[1]);

            long a = Math.abs(x);
            long b = Math.abs(y);

            if(a%2==0)
            {
            	if(b<=a)
            	{
            		if(b%2==0) 
                        System.out.println(2L*a);
            		else 
                        System.out.println(2L*a+1L);
            	}
            	else
            	{
            		if(b%2==0) 
                        System.out.println(2L*b);
            		else 
                        System.out.println(2L*b+1L);
            	}
            }

            else
            {
            	if(b<=a)
            	{
            		if(b%2==0) 
                        System.out.println(2L*a+1L);
            		else 
                        System.out.println(2L*a);
            	}
            	else
            	{
            		if(b%2==0) 
                        System.out.println(2L*b-1L);
            		else 
                        System.out.println(2L*b);
            	}
            }
        }
    }
}