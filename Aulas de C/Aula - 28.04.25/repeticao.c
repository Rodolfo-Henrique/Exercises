#include <stdio.h>

int main() {
    int i = 0;
        for(i=1; i<=20; i++) {
            printf("%d ", i); //Ordem crescente.
        }
        printf("\n");
        for(i=20; i>=1; i--) {
            printf("%d ", i); //Ordem decrescente.
        }
    return 0;
}

/*
#include <stdio.h>
// Estrutura de repetição
int main() {
    int i=0; // indexação ou iteração.
       printf("Ordem crescente: ");
      for(i=1;i<10;i++){ // início | fim | formar de contar
            printf("%d ",i);
      }
      printf("\nValor de i fora da estrutura de rep: %d",i);
      printf("\nOrdem decrescente: ");
      for(i=9;i>0;i--){
          printf("%d ",i);
      }
      printf("\nValor de i fora da estrutura de rep: %d",i);
return 0;
}

 Estruturas de repetição
    1) FOR -> Um tipo de repetição que tem início e fim estabelecido.
    2) WHILE -> Um tipo de estrutura que pode ser implementada sem o fim estabelecido.
    3) DO... WHILE -> Mesma implementação que o WHILE, porém, mesmo que a lógica não satisfaça a repetição ele executará pelo menos uma vez.
*/