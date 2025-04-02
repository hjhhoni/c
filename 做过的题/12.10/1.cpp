// *#
// &#
// &&
// &

#include <stdio.h>

int main(){
    int i;
    for(i=0; i<=3; i++)
        switch(i%3){
            case 0: printf("*");
            case 1: printf("#");
            default: printf("\n");
            case 2: printf("&"); 
        }

  
}
