#include<stdio.h>

/*
Imprimir um menu e reimprimir sempre que a opção for inválida.
*/

int main(int argc, char const *argv[]) {
  int op;
  do{
    printf("1- Para uma opcao \n2 - Para uma segunda \n0 - Para sair. =>");
    scanf("%d", &op);
    switch (op) {
      case 1: puts("Você digitou 1! "); break;
      case 2: puts("Você digitou 2!"); break;
      case 0: break;
      default: puts("Opção inválida!");
    }
  }while(op!=0);
  return 0;
}
