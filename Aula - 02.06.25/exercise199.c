#include <stdio.h>
#include <stdlib.h>

int main () {
   
    int matrix[3][3], soma=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma = soma + matrix[i][j];
        }
        printf("%d: %d\n",i,soma);
        soma=0;
    }
    
    return 0;
}