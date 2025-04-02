#include <stdio.h>
//数字反转
int main(){
    int a,b,d,e,n,sum=0;
    scanf("%d",&a);
    e=a;
    //处理负数
    if(a<0){
        a=-a;
    }
    b=a;
    //计算几位数
    for(int i=1;b>=1;i++){
        b=b/10;
        n=i;
    }
    //分开录入数字
    int c[n];
    for(int is=0;is<n;is++){
        //取每一位数        
        int chen=1;
        for(int iss=1;iss<n-is;iss++){
            chen*=10;
        }
        d=a/chen%10;
        //存入数字，注意最后一个是0的情况
        if(is==n-1&&d==0){
            n=n-1;
            is=is-1;
        }else{
            c[is] = d;
        }
        
    }
    //输出
    for(int j=0;j<n;j++){
        int chens=1;
        for(int js=1;js<n-j;js++){
            chens*=10;
        }
        sum+=c[n-1-j]*chens;
    }
    //处理负数
    if(e<0){
        sum=-sum;
    }
    printf("%d",sum);

}