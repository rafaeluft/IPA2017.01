#include<stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int qty=0, q50, q10, q5, q1;
  do{
    scanf(" %d", &qty);
    if(qty==0) break;
    q50 = qty/50;
    qty%=50;
    q10 = qty/10;
    qty%=10;
    q5 = qty/5;
    qty%=5;
    q1 = qty;
    printf("%d %d %d %d\n", q50, q10, q5, q1);
  }while(1);
  return 0;
}
