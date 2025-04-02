#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        int sum=1;
        for(int i=1;i<=j;i++){
            if (i!=1&&j%i==0&&i!=j)
            {
                    sum+=i;
            }
        }
        if (sum==j&&sum!=1)
        {
            printf("%d its factors are 1",j);
            for(int i=1;i<=j;i++){
                if (i!=1&&j%i==0&&i!=j)
                {
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
    }
}