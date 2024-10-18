#include <stdio.h>
int main ()
{
    int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int i , j;
    i = 0;
    printf("imprimir matriz\n");
    while (i < 3){
        j = 0;
        while(j < 3){
            printf("%d", arr[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    return 0;
}
