#include <stdio.h>
                                                    
// video 2 do modulo 2

int main() {

    int matx[4][4],maty[4][4],lin,col;
    printf ("\n Digite a matriz original \n");

    for (lin=0;lin<4;lin++)

        for (col=0;col<4;col++) {
            scanf ("%d",&matx[lin][col]);
            maty[col][lin]=matx[lin][col];
        }

    printf ("\n Matriz gerada \n");

    for (lin=0;lin<4;lin++) {
        for (col=0;col<4;col++)
        printf ("%d ",maty[lin][col]);
        printf ("\n");
    }
}