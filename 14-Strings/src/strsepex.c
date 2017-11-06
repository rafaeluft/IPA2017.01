#include <stdio.h>
#include <string.h>

int main()
{
	char *string,*found;
	
	string = strdup("Hello there, peasants!");
	printf("Original string: '%s'\n",string);
	
	while( (found = strsep(&string," ")) != NULL )
	printf("%s\n",found);
	
	return(0);
}