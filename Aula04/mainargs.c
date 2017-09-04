#include<stdio.h>

/*
Imprimir um menu e reimprimir sempre que a opção for inválida.
*/

int main(int argc, char const *argv[]) {
  int op=0;
  while(op < argc)
    puts(argv[op++]);
  return 0;
}
