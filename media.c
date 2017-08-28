#include<stdio.h>

int main(){
  //declara a variavel string
  char nome[512];
  //ler a variavel string
  fgets(nome, 512, stdin);
  puts(nome); //imprime uma string adicionando \n no final
  fflush(stdin); //limpa o buffer do teclado:
  float N1,//nota da primeira avaliacao
        N2,// nota da segunda avaliacao
        T, //nota acumulada dos trabalhos max 1.0
        media;
  scanf("%f %f %f", &N1, &N2, &T);
  //TODO: verificar se T está entre 0.0 e 1.0
  if(!(N1 >=0.0 && N1<=10 && N2>=0.0 && N2<=10.0 && T>=0.0 && T<=1.0))
  return printf("Entrada errada");

  media = (N1+N2)/2.0 + T;
  //operador ternario
  media = (media >10.0) ? 10.0:media;
  if(media >= 7.0){
    printf("Aprovado direto com media: %.2f", media);
  }else{
   if(media >=4.0){
     printf("Voce ficou de final com media: %.2f",media);
   }else{
     printf("O indesejado aconteceu: %.2f", media);
   }
   }
  return (0);
}
