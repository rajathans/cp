#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main () 
{
  int flags[] = {1,2,3,4,5,6,7,8,9,10};
  int acc = accumulate (flags, 10, 0, bit_xor<int>());
  cout << "xor: " << acc << '\n';
  return 0;
}