#include <stdio.h>

int main(){

    int x, i;

        scanf("%d",&x);
        if (x <= 1)
        {
            printf("N");
        }
        else{
            for (i = 2; i < x; i++)
            {
                if (x%i == 0)
                {
                    printf("N");
                    break;
                }
            }
            if (i == x)
            {
                printf("S");
            }
            
            
        }

    return 0;
}

//Exercício - 175