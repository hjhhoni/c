#include <stdio.h>
int main(){
    int i,j,k=0;
    for(j=11;j<=30;j++){
        if(k%10==0){
            printf("\n");
        }
        for(i=2;i<j;i++){
            if(!(j%i)) break;
            if(i>=j-1){
                printf("%d\t",j);
                k++;

            }
        }
    }
    
}