#include <stdio.h>

int main() {
    
    float f, c;
    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)*5/9;

    printf("%.1f", c);
    
    return 0;
}