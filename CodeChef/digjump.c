#include <stdio.h>
#include <math.h>

char * convertNumberIntoArray(unsigned int number) {
    unsigned int length = (int)(log10((float)number)) + 1;
    char * arr = (char *) malloc(length * sizeof(char)), * curr = arr;
    do {
    	*curr++ = number % 10;
    	number /= 10;
    } while (number != 0);
    return arr;
}

int main()
{
	int n;
	convertNumberIntoArray(n);
	for(int i=0; i < 100; i++)
    {
        printf("%d",convertNumberIntoArray(n););
    }

    printf("%d",ar[0]);
	return 0;
}
