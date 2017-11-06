#include <stdio.h>
#include <locale.h>

int main(int argc, char* argv[])
{
	float a = 10.5;
	printf ("Localidade atual: %s\n", setlocale(LC_ALL,NULL) );
	printf("Caso não seja PT_BR ou Portuguese, os acentos aparecerão desconfigurados\n");
	printf("Nova localidade: %s \n",setlocale(LC_ALL,""));
	printf("Poder usar ç cedilha e outros acentos é muito bom, não é?!\n");
	if(scanf("%f", &a) ==1){
		printf("%f", a); //se o locale mudou, agora números float são separados por , e não ponto
	}else
		puts("Fora do padrão!");

	return 0;
}
