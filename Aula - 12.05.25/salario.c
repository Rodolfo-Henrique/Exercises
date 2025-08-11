#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, maior, soma, media;
    soma = 0;
    maior = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o salario: \n");
        scanf("%f", &salario);
        soma = soma + salario;
        if (salario > maior)
        {
            maior = salario;
        }        
    }
    media = soma/10;
        printf("Maior salario = %.2f\n", maior);
        printf("Media de salarios = %.2f\n", media);
return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, media, soma, maior;
    soma=0;
    maior=0;
    for (int cont = 1; cont <= 10; cont++)
    {
        printf ("Digite o salário do funcionário: \n");
        scanf("%f", &salario);
        soma = soma + salario;
        if (salario > maior)
        {
            maior = salario;
        }
    }
    media = soma/10;
    printf ("O maior salário da empresa e = %.2f \n",maior);
    printf ("A média salarial da empresa e = %.2f \n",media);

return 0;
}
*/