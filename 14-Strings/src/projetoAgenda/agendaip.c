#include<stdio.h>
#include<string.h>

char **agenda;
char *filename = "agenda.txt";
int abrirDoArquivo(){
  char umalinha[1024];
  FILE *fd = fopen(filename, "r");
  if(fd){
    while(fgets(umalinha, 1024, fd)){
      //Seu codigo aqui de como tratar a linha
      //Alocar agenda ou realocar colocando o nome e o telefone
      //Agenda[0][0] pode ser o nome do contato numero 0
      //Agenda[0][1] pode ser os telefones do contato numero 0
      printf("%s", umalinha);
    }
    return 1;
  }
  return 0;
}


int salvarNoArquivo(){
  char umalinha[1024];
  FILE *fd = fopen(filename, "w"); //Ele vai destruir o arquivo existente, cuidado!
  if(fd){
    while(/*alguma coisa aqui*/){
      //Formate um contato para uma linha
      if(fputs(umalinha, 1024, fd)==EOF)
      {
        puts("Erro ao tentar gravar o arquivo!");
        return 0; 
      }
      printf("%s", umalinha);
    }
    return 1;
  }
  return 0;
}


int menu(){
 //Mostrar contatos
 //Cadastrar contatos
 //Buscar contatos ou telefone
 //Salvar a agenda

}

int main(){
  if(abrirDoArquivo()){
      puts("Arquivo aberto com sucesso!");
  }else{
    printf("Não pude abrir o arquivo %s para leitura.", filename);
  }
  return 0;
}
