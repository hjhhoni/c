#include <stdio.h>
int main(){
    //菲波那契数列,下一个为前两个数之和
    int a,sum;
    scanf("%d",&a);
    int n[a];
    n[0] = 1;
    n[1] = 1;
    for(int i=2;i<=a-1;i++){
        n[i] = n[i-1] + n[i-2];
    }

    printf("%d",n[a-1]);
}