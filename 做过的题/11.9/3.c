#include <stdio.h>

int main(){
    int l,r,count=0;
    scanf("%d %d",&l,&r);
    for(int i=l;i<=r;i++){
        if (i%2==1)
        {
            count++;
        }
        
    }
    printf("%d",count);
}
