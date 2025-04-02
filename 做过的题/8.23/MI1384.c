#include <stdio.h>
int main(){
    //求出e的值
    int n;
    double s=0;
    scanf("%d",&n);
    while (n>=1)
    {   double c=1;
        for(int i=1;i<=n;i++){
            c*=i;
        }
        s+=1/c;
        // printf("%d",n);
        n--;
    }
    printf("%.10lf",s+1);
    

}