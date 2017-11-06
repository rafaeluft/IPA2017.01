#include<stdio.h>
#include<string.h>

int main(){
  char c;
  char string[12], other[12];
  char counter=0;
  fgets(string, 12, stdin);
  while(getchar()!='\n');
  fgets(other, 12, stdin);
  puts(string);
  puts(other);
  return 0;
}
