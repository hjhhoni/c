#include <stdio.h>
//判断三角形,注意边长为0的情况
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&a==c&&b==c){
        if(a==0||b==0||c==0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }else{
        printf("no\n");
    }

    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b||b==c||a==c){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }else{
        printf("no\n");
    }

    if(a+b>c&&a+c>b&&b+c>a){
        printf("yes");
    }else{
        printf("no");
    }
}