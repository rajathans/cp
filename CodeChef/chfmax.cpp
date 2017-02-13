#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	vector<int> counts;
	
	while(t--) 
	{
		string str;
		cin>>str;

		counts.resize(26);

		for (int i = 0; i < str.length(); ++i)
		{
			switch(str[i])
			{
				case 'a': counts[0]++;	break;
				case 'b': counts[1]++;	break;
				case 'c': counts[2]++;	break;
				case 'd': counts[3]++;	break;
				case 'e': counts[4]++;	break;
				case 'f': counts[5]++;	break;
				case 'g': counts[6]++;	break;
				case 'h': counts[7]++;	break;
				case 'i': counts[8]++;	break;
				case 'j': counts[9]++;	break;
				case 'k': counts[10]++;	break;
				case 'l': counts[11]++;	break;
				case 'm': counts[12]++;	break;
				case 'n': counts[13]++;	break;
				case 'o': counts[14]++;	break;
				case 'p': counts[15]++;	break;
				case 'q': counts[16]++;	break;
				case 'r': counts[17]++;	break;
				case 's': counts[18]++;	break;
				case 't': counts[19]++;	break;
				case 'u': counts[20]++;	break;
				case 'v': counts[21]++;	break;
				case 'w': counts[22]++;	break;
				case 'x': counts[23]++;	break;
				case 'y': counts[24]++;	break;
				case 'z': counts[25]++;	break;
			}

		}


	}

	return 0;
}