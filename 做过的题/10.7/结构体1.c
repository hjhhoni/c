#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    struct
    {
        char name[10];
        float jiben;
        float fudong;
        float zhichu; 
    }man[n];
    for(int i=0;i<n;i++){
        scanf("%s %f %f %f",&man[i].name,&man[i].jiben,&man[i].fudong,&man[i].zhichu);
    }
    for(int i=0;i<n;i++){
        printf("%s %.2f\n",man[i].name,man[i].jiben+man[i].fudong-man[i].zhichu);
    }
}
