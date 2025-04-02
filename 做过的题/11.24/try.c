#include <stdio.h>
int main(){
    char a[81];//修改
    int i=0;//修改
    int k;
    for(i=0;i<80;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n'){
            k=i;
            break;
        }
    }
    k=k-1;
    for(k;k>=0;k--){
        printf("%c",a[k]);
    }
    return 0;
}