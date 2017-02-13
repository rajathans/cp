#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int monnum;
        int loss;
        float trafficdays=0.00;
        cin>>monnum;

        float prob;
        cin>>prob;

        if(monnum==9 || monnum==4 || monnum==6 || monnum==11)
            trafficdays=prob*30;
        else if(monnum==2)
            trafficdays=prob*28;
        else
            trafficdays=prob*31;

        cout<<trafficdays<<endl;
        loss=ceil(trafficdays*3*2500);
        cout<<loss<<endl;
	}
	return 0;
}