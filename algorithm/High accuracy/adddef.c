#include<stdio.h>
#include<string.h>
int jia(int arr1[],int arr2[]){
    int l1=strlen(arr1),l2=strlen(arr2);
    int sum[100];
    //倒着输入数组对齐个位
    for(int i=(l1-1)>(l2-1)?(l1-1):(l2-1);i>=0;i--){ //处理大的数次
        if(arr1[i]=='\0') arr1[i]='0';
    }
}

int main(){
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    jia(a,b);
}