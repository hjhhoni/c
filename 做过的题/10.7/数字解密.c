#include <stdio.h>
#include <stdlib.h>


int main() {
    int c[1000]={0},n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i]);
    }
    int head=1,end=n;
    do{
        printf("%d",c[head]);n--; //第一个数删除
        c[end+1]=c[head+1]; //第二个数放末尾
        head+=2;end+=1; //形成新的数列
    }while (n>0);
    
}
