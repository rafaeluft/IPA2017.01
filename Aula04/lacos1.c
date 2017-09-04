#include<stdio.h>

/*
Ler 100 números e mostrar quem é o maior.
*/

int main(int argc, char const *argv[]) {
  int temp=1, cont=0;
  int maior;
  while(cont < 100 && temp!=0){
    printf("Digite o próximo número: ");
    scanf(" %d ", &temp);
    if(cont==0 || temp > maior)//Primeiro inteiro lido
      maior = temp;
    cont+=1;
  }
  printf("O maior digitado é: %d", maior);
  return 0;
}
