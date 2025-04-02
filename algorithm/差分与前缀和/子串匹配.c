#include <stdio.h>
int dif[100010]={0};
int main() {
    int n;
    char c1,c2;
    scanf("%d %c %c",&n,&c1,&c2);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++){ //记录c2位置,存入差分数组
        if(s[i]==c2) dif[i]=1;
    }
    //前缀和,还原差分数组
    for(int i=n-2;i>=0;i--){ 
        dif[i]+=dif[i+1];
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        if(s[i]==c1) sum+=dif[i];
    }
    printf("%lld",sum);
    
}
