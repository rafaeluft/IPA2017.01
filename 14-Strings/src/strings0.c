#include<stdio.h>

int main(){
	float a = 0.5606;
	char stringA[32];
  char stringB[32] = {'\0'};
	int i;
	sprintf(stringA, "%f", a);
	puts(stringA);
	snprintf(stringB, 7, "%f", a); //6 na verdade, pois o ultimo eh o \0
	puts(stringB);
	return 0;
}
