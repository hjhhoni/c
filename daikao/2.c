#include <stdio.h>
// 考察数据类型

int main() {
    int speed,resistence;
    scanf("%d %d",&speed,&resistence);
    if (speed<resistence+resistence*0.5&&speed>=resistence*0.1+resistence)
    {
        printf("Exceed %.0f%%. Ticket 200",(float)(speed-resistence)/(float)(resistence)*100);
    }else if (speed>=resistence+resistence*0.5)
    {
        printf("Exceed %.0f%%. License Revoked",(float)(speed-resistence)/(float)(resistence)*100);
    }else{
        printf("OK");
    }
    
    
    return 0;
}