#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int c[n],v=0;
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
        if(i==0){
            v++;
        }else if (i!=0&&c[i]==c[i-1])
        {
            v++;
            if(v==3){
                v=1;
                n--;
                i-=1;
            }
        }
        
    }
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
}
