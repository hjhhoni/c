#include <stdio.h>
long long sum=0;
int main() {
    int N;
    scanf("%d",&N);
    int c[N];
    for(int i=0;i<N;i++){
        scanf("%d",&c[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(c[i]>c[j]){int temp;temp=c[i];c[i]=c[j];c[j]=temp;sum++;}
        }
    }
    printf("%lld",sum);
}
