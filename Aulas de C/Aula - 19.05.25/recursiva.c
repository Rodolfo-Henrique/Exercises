#include <stdio.h>
#include <stdlib.h>
//Função recursiva -> Chama ela mesma (É um looping mas não é uma estrutura de repetição).
//Regras da função recursiva - Não pode ser "VOID". - Deverá haver pelo menos uma condição de parada.

int factorial(int n){
    if (n == 1 || n == 0){ //Definir a condição de para
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
    
}

int somatorio(int x){
    if (x == 0){
        return 0;
    }
    else{
        return x + somatorio(x-1);
    }
    
}

int main(){

    int x = 5;
    printf("Factorial - %d\n", factorial(x));
    printf("Somatoria - %d", somatorio(x));

    return 0;
}

//Fatorial - 5! = 5*4*3*2*1 = 120
//Somatorio - 5 = 5+4+3+2+1 = 15