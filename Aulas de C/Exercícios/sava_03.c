#include <stdio.h>

int main()
{
    float vet[5],soma=0,media; int posicao;
    for (posicao=0;posicao<5;posicao++)
    {
        scanf ("%f",&vet[posicao]);
        soma=soma+vet[posicao];
    }

    media=soma/5;

    printf ("numeros maiores quemedia %.2f \n",media);

    for (posicao=0;posicao<5;posicao++)
    {
        if (vet[posicao] >= media)
        printf ("%.2f \n",vet[posicao]);
    }

}