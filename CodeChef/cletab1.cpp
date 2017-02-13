#include <bits/stdc++.h>
using namespace std;

bool containing(int elem, int *array) 
{
  	for (int i = 0; i < n; i++) 
  	{
    	if (array[i]==elem) 
    	{
        	return true;
   		}
  	}
  return false;
}

int * table,arr;
int n,m;
int findSeat(int );

int main()
{
	int t,ans = 0,seats = 0;
	cin>>t;	

	while(t--)
	{	
		scanf("%d%d",&n,&m);
		arr = new arr[m];
		tab = new tab[n];
		
		for (int i = 0; i < m ; i++) 
		{
      		cin>>arr[i];
 		}

 		for (int i = 0; i < m; i++) 
 		{
        	if (!containing(arr[i],table) && seats < n) 
        	{
        		ans++;
        		table[seats++] = arr[i];
        	}
        	
        	else if (!containing(arr[i],table)) 
        	{
        		int s = findSeat(i);
        		ans++;
        		table[s]=arr[i];
        	}
      	}

        printf("%d\n",ans);	
	}

	return 0;
}

int findSeat (int place) 
{
  map<int,int> mymap;
  int notPresent = -1;
  
  for (int i = 0; i < n; i++) 
  {
    bool p=false;
    for (int j = place+1; j < m; j++) 
    {
      if (arr[j] == table[i]) 
      {
        if (!p) 
        	p = true;
        if (mymap.count(i) <= 0) 
        {
          mymap[i] = j;
          break;
        }
      }
    }
    if (!p) 
    	notPresent = i;
  }

  map<int,int>::iterator it;
  int maxindex = -1;
  int max = -1;
  if (notPresent == -1 && mymap.size() != 0) 
  {
    for (it = mymap.begin(); it != mymap.end(); it++) 
    {
      if (it->second > max) {
        maxindex = it->first;
        max = it->second;
      }
    }
    return maxindex;
  } 
  else 
  {
    return notPresent;
  }
  mymap.clear();
}
