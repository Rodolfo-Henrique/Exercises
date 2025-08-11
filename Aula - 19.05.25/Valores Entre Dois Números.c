#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, maior, menor;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
    while (menor <= maior)
    {
        printf("%d ", menor);
        menor++;
    }
    
    return 0;
}
//Exercício - 156