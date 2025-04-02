#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int c[n],chang=0,max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
        if(c[i]==1) {chang+=1;max=max>chang?max:chang;}
        else {max=max>chang?max:chang;chang=0;}
    }
    printf("%d",max);
}
