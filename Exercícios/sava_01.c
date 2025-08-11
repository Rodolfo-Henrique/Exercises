#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num, maior;
    maior = 0;
    for (int i = 1; i <= 5; i=i+1)
    {
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
    }
    printf("N = %d", maior);

    return 0;
}