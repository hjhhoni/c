#include <stdio.h>
int main(){
    //球弹跳高度的计算
    int n=1;
    double h,s=0;
    scanf("%lf",&h);
    while(h>0.00001){
        if(n==1){
            n++;
            s+=h;
        }else
        {
            for(int i=1;i<=2&&h>0.00001;i++){
                s+=h;
            }
        }
        //提前除了，退出循环要加上
        h=h/2;
    }
    s+=h*2;
    printf("%.8f",s);
}
   