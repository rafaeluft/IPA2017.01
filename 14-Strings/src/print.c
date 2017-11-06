#include<stdio.h>

int main(){
	float a = 0.5606;
	char stringA[32];
	int i;
	sprintf(stringA, "%f", a);
	puts(stringA);
	snprintf(stringA, 6, "%f", a); //5 na verdade, pois o ultimo é o \0
	puts(stringA);
	return 0;
}
