#include <stdio.h>
int n,c[380],j=1,i=1,shu=1;
int hx(int n,int k){

    for(;j<=k;j++){
        c[i]=shu;i++;shu++;
        // if(shu==n*n+1) return 0;
    }
    j=1;
    for(;j<=k;j++){
        c[i]=shu;i+=n;shu++;
        // if(shu==n*n+1) return 0;
    }
    j=1;
    for(;j<=k;j++){
        c[i]=shu;i-=1;shu++;
        // if(shu==n*n+1) return 0;
    }
    j=1;
    for(;j<=k;j++){
        c[i]=shu;i-=n;shu++;
        if(c[i]!=0) {i+=n+1;if(c[i]==0){c[i]=shu;}}
        // if(shu==n*n+1) return 0;
    }
    j=1;
    if (shu>=n*n)
    {
        return 0;
    }else{
        return hx(n,k-2);
    }
    
}
int main(){
    scanf("%d",&n);
    if(n==1){
        printf("1");
        return 0;
    }
    hx(n,n-1);
    for(int is=1;is<=n*n;is++){
        printf("%d ",c[is]);
        if(is%n==0) printf("\n");
    }
}
