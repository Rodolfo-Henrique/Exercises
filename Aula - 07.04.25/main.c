#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b); //& = Referencia à memória alocada em execução
    printf("%d", (a+b));

    return 0;
}

/*  OPERADORES MATEMÁTICOS
+ SOMA
- SUBTRAÇÃO
/ DIVISÃO
% RESTO DA DIVISÃO (MODULARIZAÇÃO)
* MULTIPLICAÇÃO
 
    OPERADORES LÓGICOS
&& - E (AND)
|| - OU (OR)
! - NÃO (NOT)
 
    OPERADORES RELACIONAIS
< MENOR QUE
> MAIOR QUE
<= MENOR QUE OU IGUAL
>= MAIOR QUE OU IGUAL
== IGUALDADE,
!= DIFERENTE
= ATRIBUIÇÃO
*/