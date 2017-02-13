#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,p;
	long k,mini,maxi;
    vector<long> frog;
    vector<char> pos;

    cin>> n >> k >> p;

    frog.resize(n);
    pos.resize(n);

	for (int i = 0;i < n;i++)
	{
		cin >> frog[i];
		pos[i] = frog[i];
	}

	sort(pos.begin(),pos.end()+n);

	while(p--)
	{
        int frog1,frog2;
		cin>> frog1 >> frog2;
 
        if (frog1 == frog2)
        {
        	cout<<"Yes"<<endl;
            continue;
        }
 
        mini = min(frog[frog1-1],frog[frog2-1]);
        maxi = max(frog[frog1-1],frog[frog2-1]);
 
        if (mini == maxi)
        {
                cout<<"Yes"<<endl;
                continue;
        }
 
        int j = 0;
        while(pos[j]!= mini)
                j++;
        int l = j+1;
        while(pos[l]!= maxi)
                l++;
 
        bool flag = true;

        for(int i = j;i < l && i < n;i++)
        {
                if(pos[i+1] - pos[i] <= k)
                        continue;
                else
                {
                        flag = false;
                        break;
                }
        }
 
        if(flag)
                cout<<"Yes"<<endl;
        else
                cout<<"No"<<endl;
	}
return 0;
}