#include<stdio.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
  int V[10] = {[0] = 1, [2] = 3}, i;
  int V2[10] = {0}, j;
  for(i=0; i<10; i++){
    V2[i] = rand() % 100;
    printf("%d, ", V2[i]);
  }
  //Media e variancia do vetor

  return 0;
}
