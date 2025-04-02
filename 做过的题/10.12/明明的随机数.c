#include <stdio.h>
int shu[1002]={0};
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        shu[a]++;
    }
    int a[101],v=0;
    for(int i=0;i<1002;i++){
        if(shu[i]!=0) {a[v]=i;v++;}
    }
    printf("%d\n",v);
    for(int i=0;i<v;i++){
        printf("%d ",a[i]);
    }
}
