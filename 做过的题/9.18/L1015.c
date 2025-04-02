#include <stdio.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if (a<0)
    {
        printf("Invalid Value!");
    }else{
        if (a<=50)
        {
            b=a*0.53;
            printf("cost = %.2f",b);
        }else{
            b=50*0.53+(a-50)*0.58;
            printf("cost = %.2f",b);
        }
        
    }
    

}