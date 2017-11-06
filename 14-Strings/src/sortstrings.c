#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void swap(char **p1, char **p2){
	char *ptr_tmp;
	ptr_tmp = *p1;
	*p1 = *p2;
	*p2 = ptr_tmp;
}

char* produz_nome(char* producedName, unsigned int size){
/**
Ira produzir nomes de tamanho 2*size sempre em pares de consoante e vogal
*/
	const static char vogais[] = "aeiou";
	const static char consoantes[] = "bcdfghjklmnpqrstvxzw";
	unsigned int i, randomSize = rand()%(size+1), rnd;
	if(randomSize <2) randomSize = 2; //pelo menos duas letras

	for(i=0; i< 2*randomSize; i++)
	{
		rnd = rand()%strlen((i%2) == 0 ? consoantes: vogais);;
		producedName[i] = (i%2==0)? consoantes[rnd]:vogais[rnd];
	}
	producedName[i++] = ' ';

	unsigned int randomSize2 = rand()%(size+1);
	if(randomSize2 <2) randomSize2 = 2; //pelo menos duas letras

	for(; i<= (2*randomSize+2*randomSize2); i++)
	{
		rnd = rand()%strlen((i%2) != 0 ? consoantes: vogais);
		producedName[i] = (i%2!=0)? consoantes[rnd]:vogais[rnd];
	}
	producedName[i] = '\0';
	return producedName;
}
void ordena_nomes(char **nomes, unsigned int size){
	unsigned int i, j;
	for(i=0; i< size-1; i++)
		for(j=i+1; j< size; j++){
			if(strcmp(nomes[i], nomes[j])> 0 )
				swap(&nomes[i], &nomes[j]);
		}
}

int main(){
	srand(time(NULL));
  const int qty_names = 30;
  const int max_name = 256;
  char nomes[qty_names][max_name];
	unsigned int i;
	unsigned int qty;
	puts("Entre com a qtde de nomes (1 a 30): ");
	scanf("%u", &qty);
	qty = (qty<=qty_names)? qty : qty_names;

	char *ptr_nomes[qty]; //somente a partir do C99

	for(i = 0; i< qty; i++){
		produz_nome(nomes[i], 6);
		puts(nomes[i]);
		ptr_nomes[i] = nomes[i];
	}

	ordena_nomes(ptr_nomes, qty);
	puts("Ordenado agora \n");
	for(i = 0; i< qty; i++){
		puts(ptr_nomes[i]);
	}

	puts("A matriz contina normal \n");
	for(i = 0; i< qty; i++){
		puts(nomes[i]);
	}

	return 0;
}
