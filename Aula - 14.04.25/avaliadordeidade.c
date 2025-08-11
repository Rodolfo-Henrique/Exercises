#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Erro!");
    }
    else if (idade >= 0 && idade < 18)
    {
        printf("Menor de idade!");
    }
    else if (idade >= 18 && idade < 61)
    {
        printf("Maior de idade!");
    }
    else if (idade >=61 && idade < 111)
    {
        printf("Idoso");
    }
    else
    {
        printf("Erro!");
    }
    return 0;
}