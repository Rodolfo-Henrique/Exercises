#include <stdio.h>

int main() {
    int a, m, total;

        printf("Digite a quantidade de alunos: ");
        scanf("%d", &a);

        printf("Digite a quantidade de monitores: ");
        scanf("%d", &m);

        total = a + m;

        if(total <= 50){
            printf("S");
        }
        else{
            printf("N");
        }
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, M;
	scanf("%d",&A);
	scanf("%d",&M);

    // Seu código vai aqui

    return 0;
}
*/