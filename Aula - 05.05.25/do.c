#include <stdio.h>
#include <stdbool.h>

int main() {
    int i=1, n=10;

        do {
            printf("%d ", i);
            i++;
        }while (i<=n);
            printf("\n");

    n=1, i=10;

        do {
            printf("%d ", i);
            i--;
        }while (i>=n);
            printf("\n");

    i=0;

        do {
            int l;
            printf("Digite 10 para parar o loop: ");
            scanf("%d", &l);
                if(l == 10){
                    break;
                }
            i++;
        }while(true);
        printf("O loop contabilizou %d iterações", i);
return 0;
}