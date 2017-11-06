#include<stdio.h>

int main(){
  char c;
  char string[12];
  char counter=0;
do{
  c = getchar();
  string[counter] = c;
  //putchar(c);
}while(c!= '\0' && c!='\n' && ++counter<11);
string[counter] = '\0';
puts(string);
  return 0;
}
