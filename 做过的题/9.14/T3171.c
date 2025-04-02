#include <stdio.h>
int main(){
    float x,y,h=10;
    scanf("%f %f",&x,&y);
    float d1,d2,d3,d4;
    d1=(x-2)*(x-2)+(y-2)*(y-2);//(2,2)
    d2=(x-2)*(x-2)+(y+2)*(y+2);//(2,-2)
    d3=(x+2)*(x+2)+(y-2)*(y-2);//(-2,2)
    d4=(x+2)*(x+2)+(y+2)*(y+2);//(-2,-2)
    if (d1>1&&d2>1&&d3>1&&d4>1)
    {
        h=0;
    }
    printf("%.0f",h);
    return 0;
}