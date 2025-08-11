#include <stdio.h>

int main(){
    int vet [5] = {0,0,0,0,0}, position;
    char letra;

    scanf("%c", &letra);

    while (letra != 'z')
    {
        switch (letra)
        {
        case 'a':
            vet[0]++;
            break;
        case 'e':
            vet[1]++;
            break;
        case 'i':
            vet[2]++;
            break;
        case 'o':
            vet[3]++;
            break;
        case 'u':
            vet[4]++;
            break;
        
        default:
            break;
        }
        scanf("%c", &letra);
    }
    printf ("Quantidade de cada vogal, em ordem \n");

    for (position = 0; position < 5; position++)
    {
        printf("%d\n", vet[position]);
    }
    
    return 0;
}