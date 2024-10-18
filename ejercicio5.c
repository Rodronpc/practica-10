#include <stdio.h>
int main ()
{
  int matriz1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
  int matriz2[3][3] = {{3,2,1},{3,2,1},{3,2,1}};
  int i,j,suma;
  suma = 0
  for (i =  0; i < 3 ; i++){
    for (j = 0 ; j < 3 ; j++){
     suma = matriz1[i][j] + matriz2[i][j];
    }
  }
  printf("\n");
  return 0;
}
