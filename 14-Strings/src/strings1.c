#include<stdio.h>
#include<string.h>
int main()
{
    char text[10];
    int i;
    int countL,countU,countS;
     
    printf("Digite alguma string: ");
    fgets(text, 100, stdin);
    printf("String digitada is: %s size=%lu\n",text, strlen(text));
     
    countL=countU=countS=0; 
     
    for(i=0;text[i]!='\0';i++)
    {
        if((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z'))
        {
            if((text[i]>='A' && text[i]<='Z'))
                countU++;
            else
                countL++;
        }
        else
        {
            //character is not an alphabet
            countS++; //it is special character
        }
    }
     
    //print values
    printf("Qtde de letras em caixa alta: %d\n",countU);
    printf("Qtde de letras em caixa baixa: %d\n",countL);
    printf("Qtde de não letras: %d\n",countS);
     
    return 0;
}