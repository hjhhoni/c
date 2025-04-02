#include <stdio.h> //预处理程序pre-deal
//主程序
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    return 0;
}

//定义函数
int max(int x,int y){ //函数的参数类型要标注清楚
    int z;
    if(x>y)z=x;
    else z=y;
    return z;  //push z to main
}
