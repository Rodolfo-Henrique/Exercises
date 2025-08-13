#include <stdio.h>
#include <stdlib.h>
//Funções - Programa funcional

void soma(int a, int b){//Função vazia -> Procedimento
    printf("Função soma - %d\n", a+b);
}

int soma2(int a, int b){//Função do tipo inteira
    return a+b;
}

int main() {
    int a = 10, b = 20;
    soma(a,b);
    printf("Função soma2 - %d", soma2(a,b));

    return 0;
}