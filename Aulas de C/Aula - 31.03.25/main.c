#include <stdio.h> //Biblioteca (lib)
#include <stdbool.h>

int main(){ // Função principal
    int a = 20, b = 100;
    float c = 20.5, d = 200.9;
    double e = 10.86547647;
    bool f = false;
    char g = 'R'; // Verificar a tabela ASCII

    printf("Olá mundo\n");
    printf("Imprimindo cada tipo de variável: \n");
    printf("Tipos inteiros: %d %i\n", a,b);
    printf("Tipos float: %f %f\n", c,d);
    printf("Tipo double: %lf\n", e);
    printf("Tipo boolean: \n", f);
    printf("Tipo Char: %c\n", g);

    return 0; //Sinaliza o final da função main
}


/* COMPILADORES (.exe)
1) A leitura ocorre da parte superior esquerda até a parte inferior direita;
2) Elimina redundâncias e comentários;
3) Gera o executável sem a necessidade do código fonte do programa;
*/

/*
char               |       %c       | Um único caractere 
int	               |    %d ou %i    | Um inteiro (Base d ecimal)
int	               |       %o       | Um inteiro (Base o ctal)
int	               |    %x ou %X    | Um inteiro (Base he x adecimal)
short int          |       %hd	    | Um s h ort inteiro (Base d ecimal)
long int           |       %ld	    | Um l ong inteiro (Base d ecimal)
unsigned short int |       %hu      | Short inteiro positivo
unsigned int       |       %u       | Inteiro positivo
unsigned long int  |       %lu      | Long inteiro positivo
float              | %f ou %e ou %E |	 
double             | %f ou %e ou %E |
*/

