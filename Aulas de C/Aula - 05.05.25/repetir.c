#include <stdio.h>
#include<stdbool.h> // Biblioteca voltada as funções boleanas.
// WHILE ... DO WHILE (Estruturas de repetição)
int main(){
    int i =1, n=10; // iteração.
        while(i<=n){
            printf("%d ",i);
            i++;
        }
        printf("\n");
    int x=1;
    i=10;
        while(i>=x){
            printf("%d ",i);
            i--;
        }
        printf("\n");
    int ii=0;
        while(1){
            int a;
                printf("Digite 0 para cancelar o loop:\n");
                scanf("%d",&a);
                if(a == 0){
                    break; // Comando pare.
                }
            ii++;
        }
         printf("O loop realizou %d de iterações.",ii);

 return 0; // Indicando o final da função principal (main)
}
// FOR -> FOR(inicio; condição de parada; forma de contagem){}