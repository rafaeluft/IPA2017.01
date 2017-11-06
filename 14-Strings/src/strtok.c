#include <stdio.h>
#include <string.h>

int main()
{
	char *string, *found;

	string = strdup("Hello there, peasants!");
	printf("Original string: '%s'\n",string);
	do{
		if((found = strtok(string," ")) == NULL){
			break;
		}
		printf("%s\n",found);
		string = NULL;
	}while(1);
	return(0);
}
