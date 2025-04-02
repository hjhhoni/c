#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float time=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        float x,y,ren;
        scanf("%f %f %f",&x,&y,&ren);
        //去
        time+=sqrt(x*x+y*y)/50;
        //上船
        time+=ren;
        //返程
        time+=sqrt(x*x+y*y)/50;
        //下船
        time+=ren*0.5;
    }
    if(time>(int)time) time=(float)((int)time+1);
    printf("%.0f",time);
    return 0;
}