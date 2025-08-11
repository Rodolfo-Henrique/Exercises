#include <stdio.h>
// Matrizes - Estruturas homogêneas.
int main() {
    int n,m;
        printf("Digite a quantidade de linhas: ");
            scanf("%d",&n);
        printf("Digite a quantidade de colunas: ");
            scanf("%d",&m);
        int matrix[n][m];
        printf("Digite os valores da matriz\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("Valor na posição/coordenada[%d][%d]: ",i,j);
                    scanf("%d",&matrix[i][j]);
            }
        }
        printf("\nOs valores da matriz foram\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
return 0;
}