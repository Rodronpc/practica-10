#include <stdio.h>
int main ()
{
  int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
  int i,j;
  printf("imprimir matriz\n");
  for (i =  0; i < 3 ; i++){
    for (j = 0 ; j < 3 ; j++){
      printf("%d", arr[i][j]);
    }
  }
  printf("\n");
  return 0;
}
