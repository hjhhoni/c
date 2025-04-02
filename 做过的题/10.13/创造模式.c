#include <stdio.h>

int main() {
    int t,time;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&time);
        if(time>=0&&time<12000) printf("day\n");
        if (time>=12000&&time<13800) printf("sunset\n");
        if(time>=13800&&time<22200) printf("night\n");
        if(time>=22200) printf("sunrise\n");    
    }
}
