/*#include <stdio.h>

int main() {

    int soma=0;
    for (int cont=1;cont<=10;cont=cont+1){
    soma=soma+cont; //Soma de todos os números
    }
    printf ("A soma dos números entre 1 e 10 = %d\n",soma);

return 0;
}
*/

#include <stdio.h>

int main() {

    float soma=0, media;
    for (int cont=1;cont<=10;cont++){
    soma=soma+cont;
    }
    media=soma/10; //Média
    printf ("A média dos números entre 1 e 10= %f",media);

return 0;
}