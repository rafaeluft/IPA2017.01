#include<stdio.h>
#include<string.h>

int main(){

  char *source = "Esta aeueh uma string teste";
  char *ptr = source;
  char *accept = "Eaeuaie";
  ptr = strpbrk(ptr, accept);
  while(ptr){
    printf("%lu\n", strspn(ptr, accept));
    printf("Caractere aceito: %c \n", *ptr);
    ptr = strpbrk(ptr+1, accept);
  }
  puts(source);
  return 0;
}