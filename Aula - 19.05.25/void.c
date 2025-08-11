#include <stdio.h>
#include <stdlib.h>
//Funções - Programa funcional

void f1();//Cabeçalho
void f2();//Cabeçalho
void f3();//Cabeçalho
void f4();//Cabeçalho

void f1(){
    printf("Chamando função f1\n");
    f2();
}

void f2(){
    printf("Chamando função f2\n");
    f3();
}

void f3(){
    printf("Chamando função f3\n");
    f4();
}

void f4(){
    printf("Chamando função f4\n");
}

int main() {
    f1();

    return 0;
}

//Quando uma função chama uma outra função a ordem precisa estar de forma decrescente pois, caso contrário, ocorrerá erro de memória mesmo que imprima corretamente o resultado.
//Em casos onde é necessário uma função chamar uma outra função e, estiverem em ordem crescente, é preciso criar cabeçalos acima das funções.
//Para uma função ser chamada por outra, ela precisa estar acima da função que à está chamando.