#include <stdio.h>
int main()
{
  int age;
	char name[128];
	char temp;

	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter name: ");
	scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",name);

	printf("Name is: %s, age is: %d\n", name, age);
	return 0;
}
