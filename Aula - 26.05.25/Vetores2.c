#include <stdio.h>
#include <stdlib.h>

//Vetores - Estruturas de dados homogêneas (Agrupar dados do mesmo tipo).

int main() {

    int n;
    printf("Digite a quantidade de vetores: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Lendo as posições do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Digite a posição %d: ",i);
        scanf("%d", &vetor[i]);
    }
    printf("Imprimendo os valores nas posições do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}