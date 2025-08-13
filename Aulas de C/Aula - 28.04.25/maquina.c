#include <stdio.h>

int main(){
    int a, b, c; //Quantidade de pessoas.
        printf("Digite a quantidade de pessoas por andares: ");
        scanf("%d %d %d", &a, &b, &c);
    int andar1, andar2, andar3;
        andar1 = b*2 + c*4;
        andar2 = a*2 + c*2;
        andar3 = b*2 + a*4;

    if (andar1 <= andar2 && andar1 <= andar3){
        printf("%d", andar1);
    }
    else if(andar2 <= andar3){
        printf("%d", andar2);
    }
    else {
        printf("%d", andar3);
    }

return 0;
}


/*
#include <stdio.h>
 
int main() {
    int a1, a2, a3; // Pessoas por andar.
        scanf("%d %d %d",&a1,&a2,&a3);
    int t1,t2,t3; // Tempos por andar.
    t1 = a2*2+ a3*4; // 20*2 + 30*4 = 160
    t2 = a1*2 + a3*2; // 10*2 + 30*2 = 80
    t3 = a2*2+ a1*4; // 20*2 + 10*4 = 80
    if(t1<= t2 && t1<=t3){
        printf("%d",t1);
    }else if(t2<=t3){
        printf("%d",t2);
    }else{
        printf("%d",t3);
    }
 
return 0;
}
*/