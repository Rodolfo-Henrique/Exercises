#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, value, greater;
    greater = 0;
    for (value = 1; value <= 5; value++)
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > greater)
        {
            greater = num;
        }        
    }
        printf("Maior número digitado = %d\n", greater);
return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont,num,maior;
    maior=0;
    for (cont=1;cont<=15;cont++)
    {
        printf ("Digite um número: ");
        scanf("%d",&num);
        if (num > maior)
        {
            maior=num;
        }
    }
    
    printf ("O maior dos números lidos = %d\n",maior);
    return 0;
}
*/