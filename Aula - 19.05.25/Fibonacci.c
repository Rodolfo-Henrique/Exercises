#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFALT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    int ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;

    printf("Série de Fibonacci (8 primeiros termos: )\n");
    printf("%d ", ant2);
    printf("%d ", ant1);

    for (int i = 3; i <= 8; i++)
    {
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
    }
    
    printf("\n");
    system("pause");
    SetConsoleOutputCP(CPAGE_DEFALT);

    return 0;
}
//ExercÃ­cio - 257

/*
#include <stdio.h>
 
int fib(int n){
    if (n == 0 || n == 1 ){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
 
int main(){
   int n; 
    scanf("%d",&n);
    printf("%d",fib(n));
}
// 0 1 1 2 3 5 8 13 21 34 55 89 ...
*/