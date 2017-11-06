#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i;
	char buffer [sizeof(int)*8+1];
	printf ("Enter a number: ");
	if (scanf ("%d",&i) == 1) {
		itoa (i,buffer);
		printf ("decimal: %s\n",buffer);
		itoa (i,buffer);
		printf ("hexadecimal: %s\n",buffer);
		itoa (i,buffer);
		printf ("octal: %s\n",buffer);
	}
	return 0;
}
