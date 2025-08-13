#include <stdio.h>
// Soma das diagonais de uma matriz
int main() {
    int matriz[3][3],dp=0,ds=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&matriz[i][j]);
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               if(i==j){
                   dp = dp+ matriz[i][j];
               }
               if(i+j == 3-1){
                   ds = ds + matriz[i][j];
               }
            }
        }
        printf("Diagonal principal: %d\n",dp);
        printf("Diagonal secundaria: %d\n",ds);
return 0;
}
 
/*
1 2 4
5 4 6
45 3 5
 
DP (i==j) 
DS (i+j == n-1)
 
*/