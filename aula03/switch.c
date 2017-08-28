#include<stdio.h>
int main() {
  int op;
  puts("Menu: \n 1 - Imprimir a primeira frase \n 2 - Imprimir a segunda frase \n 0 - para sair: ");
  scanf("%d", &op);
  switch (op) {
    case 1:
       puts("Hey vc digitou 1!");
       break;
    case 2:
       puts("Hey, 2 foi o que vc digitou");
       break;
    case 0:
       puts("Ok, saindoo....");
       break;
/*    default:
      puts("Nenhuma das anteriores hein!");
      break;*/
  }
  return 0;
}
