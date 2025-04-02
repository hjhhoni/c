#include <cstdio>
int a[1000],b[1000];
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        sum+=a[i]*b[i];
    }
    printf("%d",sum);
}   
