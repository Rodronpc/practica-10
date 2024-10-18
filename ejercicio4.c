#include <stdio.h>
int main ()
{
  int lista[3][3];
  int i,j;
  int renglon,columna;
  printf("\nDa el número de renglones y columnas separados con coma\n");
  scanf("%d,%d",&renglon,&columna);
  if(((renglon>=1) && (renglon<=3))&&((columna>=1) && (columna<=3)))
    {
      for (i= 0 ; i <= renglon-1 ; i++)
      {
        for(j= 0 ; j <= columna-1 ; j++)
        {
          printf("\nNúmero para el elemento %d,%d del arreglo", i,j );
          scanf("%d",&lista[i][j]);
        }
      }
      printf("\nLos valores dados son: \n");
      for (i= 0 ; i <= renglon-1 ; i++)
      {
        for(j= 0 ; j <= columna-1 ; j++)
        {
          printf("%d ", lista[i][j]);
        }
        printf("\n");
      }
    }
  else printf("Los valores dados no es válido");
  printf("\n");
  return 0;
}
