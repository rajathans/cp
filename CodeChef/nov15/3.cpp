#include <bits/stdc++.h>
using namespace std;

int gcd(int number1, int number2) 
{
		int shift;
		if (number1 == 0)
			return number2;
		if (number2 == 0)
			return number1;
		for (shift = 0; ((number1 | number2) & 1) == 0; ++shift) {
			number1 >>= 1;
			number2 >>= 1;
		}
		while ((number1 & 1) == 0)
			number1 >>= 1;
		do {
			while ((number2 & 1) == 0)
				number2 >>= 1;

			if (number1 > number2) {
				int t = number2;
				number2 = number1;
				number1 = t;
			}
			number2 = number2 - number1;
		} while (number2 != 0);
		return number1 << shift;
}

int main()
{
	int t,n;
	scanf("%d",&t);

	while(t--) {
	    scanf("%d",&n);
	    int sum = 0;
	    for (int i = 1; i <=n; i++)
	    {
	    	sum+=(n/gcd(i,n));
	    }
	    printf("%d\n", sum);
	}

	return 0;
}