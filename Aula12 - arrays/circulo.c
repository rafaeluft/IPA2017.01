#include<stdio.h>
#include<math.h>
#define N 11
#define pi 3.1415
int main(){
  char M[N][N] = {0}, i, j;
  double ang = 0;
  double raio = 5.5;
  while(ang <= 2.0*pi){
    i = raio+raio*sin(ang);
    j = raio+raio*cos(ang);
    printf("(%d, %d)\n", i, j);
    M[i][j] = '*';
    ang+= (double)pi/20.0;
    printf("ang: %lf\n", ang);
  }
  for(i=0; i< N; i++){
    for(j=0; j<N; j++){
      printf("%c ", (M[i][j]==0) ? '0':M[i][j]);
    }
    printf("\n");
  }
  return 0;
}
