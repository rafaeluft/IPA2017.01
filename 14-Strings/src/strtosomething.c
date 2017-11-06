#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(){
  char *decnumbers[] = {"Something well done", "      +50.3003030303000303030303030303030;1000.01010;101010", "3200000000000000000000000000003210000000000123.3200000000000000000000000000003210000000000123"};
  char *endnptr;
  unsigned int i;
  double aDouble[3];
  float aFloat;
  //bDouble = 50.3003030303000303030303030303030;
             //300303030300028694909997284412384033203125
  long double aLDouble;

  for (i=0; i< 3; i++){
    errno = 0;
    aDouble[i] = strtod(decnumbers[i], &endnptr);
    if (endnptr==decnumbers[i])
    {
      puts("Ocorreu uma falha na conversão");
    }else{
      if(ERANGE == errno)
        puts("Erro de underflow ou overflow");
      else
      {
        printf("Eu parei nesta parte: %s\n", endnptr);
        printf("aDouble: %0.100lf\n", aDouble[i]);

      }
    }
  }
  return(0);
}
