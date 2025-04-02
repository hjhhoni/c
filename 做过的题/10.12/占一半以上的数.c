#include <stdio.h>
int zhen[52]={0},fu[52]={0};
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a>=0) zhen[a]++;
        else fu[-a]++;
    }
    for(int i=0;i<52;i++){
        if(zhen[i]>n/2) {printf("%d",i);return 0;}
        if(fu[i]>n/2) {printf("%d",-i);return 0;}
    }
    printf("no");
}
