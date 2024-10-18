#include <stdio.h>
int main ()
{
    int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int i , j;
    i = 0;
    printf("imprimir matriz\n");
    do
      {
        j = 0;
        do
          {
          printf("%d", arr[i][j]);
          j++;
          }
          while (j < 3);
          printf("\n");
          i++;
      }
    while(i < 3);
    return 0;
}
