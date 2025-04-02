#include <stdio.h>

int main() {
    int q=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (i%2==1)
        {
            for(int j=q;j<=q+i-1;j++){
                printf("%d ",j);
            }
            printf("\n");
            q+=i;
        }else
        {
            for(int j=q+i-1;j>=q;j--){
                printf("%d ",j);
            }
            printf("\n");
            q+=i;
        }
        
        
    }
    

}
