#include <stdio.h>
int main(){
    // 陶陶摘苹果
    int a=0,b[10],c,n,sum=0;
    while (scanf("%d",&c)&&a<9)
    {
        b[a]=c;
        a++;
    }
    b[a]=c;
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        // printf("%d",b[i]);
        if (b[i]<=n+30)
        {
            sum+=1;
        }
        
    }
    printf("%d",sum);
}