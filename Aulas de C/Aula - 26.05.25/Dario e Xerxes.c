#include <stdio.h>
 
int main(){

   int n,d,x,nd=0,nx=0;
      scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d", &d,&x);
            if(x==0){
                x = 5;
            }
            if(d<x){
                if((x-d)<=2){
                    nd++;
                }else{
                    nx++;
                }
            }else if((d-x)<=2){
                nx++;
            }else{
                nd++;
            }
    }
    if(nd>nx){
        printf("dario\n");
    }else{
        printf("xerxes\n");
    }

}
 