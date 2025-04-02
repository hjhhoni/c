#include <stdio.h>
//鸡尾酒疗法
int main(){
    int input_count,ori,a,b;
    scanf("%d", &input_count);
    scanf("%d %d",&a,&b);
    ori = (float)b / a * 100;
    int n[input_count-1];

    for (int i = 0; i < input_count-1; ++i) {
        int c,d,end;
        scanf("%d %d", &c,&d);
        end = (float)d / c * 100;

        if(end-ori>5){
            n[i] = 0;
        }else if (ori-end>5)
        {
            n[i] = 1;
        }else{
            n[i] = 2;
        }
        
    }


    for (int e = 0; e < input_count-1; e++) 
    {
        if(n[e]==0){
            printf("better\n");
        }else if (n[e]==1)
        {
            printf("worse\n");
        }else if (n[e]==2)
        {
            printf("same\n");
        } 
    }

}