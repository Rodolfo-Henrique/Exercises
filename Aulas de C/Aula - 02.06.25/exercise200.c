#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3],soma=0;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&matriz[i][j]);
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               soma = soma + matriz[j][i];
            }
            printf("Coluna %d: %d\n",i,soma);
            soma=0;
        }

    return 0;
}