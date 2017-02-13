#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("out.txt");
 
int main() 
{
    long long int T;
    fin>>T;
    while(T--)
    {
        string S;
        fin>>S;

        string b = S, s = S;
        long long int i =0;
        while(i<S.size()) 
        {
            long long int j=i+1;
            while(j<S.size()) 
            {
                swap(S[i],S[j]);
                
                if(S[0] != '0') 
                {
                    b = max(b,S);
                    s = min(s,S);
                }

                swap(S[i],S[j]);
                j++;
            }
            i++;
        }
        fout<<"Case #"<<T<<": "<<s<<" "<<b<<endl;
    }
    return 0;
}