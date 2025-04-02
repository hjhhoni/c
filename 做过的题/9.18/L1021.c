#include<stdio.h>
int main(){
    int lower,upper,fahr;
    float celsius; 
    scanf("%d %d",&lower,&upper);
    
    if(lower>upper||upper>100) printf("Invalid.");
 
    else {
        printf("fahr celsius\n");
        for(;lower<=upper;lower+=2) {
            fahr=lower;
            celsius=5.0*(fahr-32)/9;
            printf("%d%6.1f\n",fahr,celsius);
			//右对齐 %后.前为正值,
			//左对齐 %后.前为负值
            //%后.前为0或无数值为默认对齐方式(左对齐)
 
        }
    }
}