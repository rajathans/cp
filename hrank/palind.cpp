#include <bits/stdc++.h>
using namespace std;

int weight = 1;
int original;

int checkPalindrome(int);

int isPalindrome(int num)
{
if(checkPalindrome(num))
    return 1;
else
    return 0;
}

int checkPalindrome(int num)
{
    int rem;
    if(num/10 == 0)
    {
        if(num == original%10)
        {
            original = original/10;
            return 1;
        }
        
    }
    rem = num % 10;
    checkPalindrome(num/10);
    if(rem == original)
        return 1;
    else
        original = original/10;

    return 1;
}

int main()
{
    int t,n,m;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        m=0;
        for (int i = n+1; i>n ; i++)
        {
            if(isPalindrome(i)==1)
            {
                m=i;
                goto l;
            }
        }

        l:
        cout<<m<<endl;
        cout<<m-n<<endl;
    }

    return 0;
}