#include <stdio.h>
int main(){
    //含k个3的数
    int m,k;
    int i,a=0;
    scanf("%d %d",&m,&k);
    int j=m;
    //判断几个3
    for(;j>=10;){
        if(j%10==3){
            a++;
        }
        j=j/10;
    }
    // 补上最后一个j
    if(j%10==3){
        a++;
    }
    // 判断条件
    if(a==k&&m%19==0){
        printf("YES");
    }else{
        printf("NO");
    }
}
