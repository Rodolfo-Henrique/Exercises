#include <stdio.h>
// Matrizes - Estruturas homogêneas.
int main() {
    int matriz[3][2]={
        {9,0},
        {-6,3},
        {-1,-1}
    };
    for(int i=0;i<3;i++){ // Percorrer as linhas
        for(int j=0;j<2;j++){ // Percorrer as colunas
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
return 0;
}