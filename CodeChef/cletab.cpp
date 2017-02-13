#include <bits/stdc++.h>
using namespace std;

/**blah blah
map<int,int>::iterator it;
  int maxindex = 1;
  int max = 0;
  if (notPresent == -1 && mymap.size() != 0) 
  {
    for (it = mymap.begin(); it != mymap.end(); it++) 
    {
      if (it->second > max) 
      {
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
  mymap.clear();**/

int * table;
int * arr;
int n,m;

bool contains (int elem) 
{
  for (int i = 0; i < n; i++) 
  {
    if (table[i]==elem) 
    {
      return true;
    }
  }
  return false;
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
      if (it->second > max) 
      {
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

int main () 
{
  int t;
  scanf("%d",&t);

  while (t--) 
  {
    scanf("%d%d",&n,&m);
    arr = new int[m];
    table = new int[n];

    int ans = 0;
    int seats = 0;
    for (int i = 0; i < m ; i++) 
    {
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i < m; i++) 
    {
      if (!contains(arr[i]) && seats < n) 
      {
        ans++;
        table[seats++] = arr[i];
      }
      else if (!contains(arr[i])) 
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