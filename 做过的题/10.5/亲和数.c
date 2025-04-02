#include <stdio.h>
#include <math.h>

int he(int x){
    int sum=1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) sum+=i+x/i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(he(a)==b&&he(b)==a){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
