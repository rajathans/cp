import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class devstr 
{ 
    public static void main(String[] args) 
    {
    	String zerostartstring = "01";
    	String onestartstring = "10";
    	ModScanner ms = new ModScanner();
        PrintWriter pw = new PrintWriter(System.out);
    	int t=ms.nextInt();
    	while(t>0)
    	{
    		t=t-1;
    		int n=ms.nextInt();
	        int k=ms.nextInt();
	        int[] a=new int[m];
	        String str;
	        if (k==1) 
	        {
	        	b = false;
	        	int zerostartcost = 0;
				int onestartcost = 0;
				temp = ms.nextLine();
				for (int i=0;i<n ;i++ ) 
				{
					char getstartone;
					b = !b;
					if (b) 
					{
						getstartone = '1';	
					}
					else
						getstartone = '0';
					if (temp[i]==getstartone) 
					{
						zerostartcost+=1;
					}
					else
						onestartcost+=1;
				}
				boolean zerostart = onestartcost>zerostartcost ? true : false;
				pw.print(zerostartcost>onestartcost ? onestartcost : zerostartcost+"\n");
				int temp = n>>1;
				if (zerostart) 
				{
					for (int i=0;i<temp ;i++ ) 
					{
						pw.print(zerostartstring);		
					}
					if (n&1) 
					{
						pw.print("0");	
					}	
				}
				else
				{
					for (int i=0;i<temp ;i++ ) 
					{
						pw.print(onestartstring);	
					}
					if (n&1) 
					{
						pw.print("1");
					}
				}
				pw.print("\n");
	        }
	        else
	        {
	        	int totalcount = 0;
				int limitexceed = k+1;
				int onecontinouscount = 0;
				int zerocontinouscount = 0;
				String array = ms.nextLine();
				for(int i=0;i<n-1;i++)
				{
					if(array[i]=='1')
					{
						onecontinouscount+=1;
						zerocontinouscount = 0;
						if(onecontinouscount==limitexceed)
						{
							totalcount+=1;
							if(array[i+1]=='1')
								{
									onecontinouscount = 0;
									array[i] ='0';
								}
							else
								{
									array[i-1] = '0';
								}
						}
					}
					else
					{
						zerocontinouscount+=1;
						onecontinouscount = 0;
						if(zerocontinouscount==limitexceed)
						{
							totalcount+=1;
							if(array[i+1]=='0')
								{
									zerocontinouscount = 0;
									array[i] = '1';
								}
							else
								{
									array[i-1] = '1';
								}
						}
					}
				}
				if(array[n-1]=='1' && onecontinouscount==k)
					{
						totalcount+=1;
						array[n-1] = '0';
					}
				else if(zerocontinouscount==k)
					{
						totalcount+=1;
						array[n-1] = '1';
					}
				pw.print(totalcount+"\n");
				for(int i=0;i<n;i++)
				{
					pw.print(array[i]);
				}
				pw.print("\n");
	        }
    	}
    }
}

class ModScanner {
	BufferedReader br;
	StringTokenizer st;
 
	public ModScanner() {
		br = new BufferedReader(new InputStreamReader(System.in));
	}
 
	String nextToken() throws Exception {
		while (st == null || !st.hasMoreElements()) {
				st = new StringTokenizer(br.readLine());
			
		}
		return st.nextToken();
	}
 
	int nextInt() throws Exception, Exception {
		return Integer.parseInt(nextToken());
	}
 
	long nextLong() throws Exception {
		return Long.parseLong(nextToken());
	}
 
	double nextDouble() throws Exception {
		return Double.parseDouble(nextToken());
	}
} 
    	