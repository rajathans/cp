#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

inline int cToInt(const string& s){
    istringstream i(s);
    int x;
    i >> x;
    return x;
}

int main()
{
    string  x;
    int count = 0, len = 0;
    vector <int> array;

    getline(cin, x);
    len = x.length();
    array.resize (len);

    for(int i = 0; i < len; i++)
    {
        array[i] = cToInt(x.substr(i, 1));
        cout<<array[i];

    }
    return 0;
}
