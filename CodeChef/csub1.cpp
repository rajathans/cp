#include <iostream>
#include <stdio.h>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    char c;
    int n,t,k;
    long long out,count;
    cin>>t;
    
    while(t--)
    {
		count = 0;
        cin>>n;
        
        for(k=0 ; k<n ; k++)
        {
            cin>>c;
            if(c=='1')
            {
                count++;
			}
        }
 
        out = count + (count*(count-1))/2;
        cout<<out<<endl;
    }
    return 0;
}
