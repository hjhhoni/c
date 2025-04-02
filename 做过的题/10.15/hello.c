#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char yuanshi[10000000]; //原式，中缀式
char stack[10000000][2]={0}; //后缀式,0为正负,1代表负,1为数
char fu[10000000]; //运算符
int js[10000000]; //计算栈
int main() {
    scanf("%s",yuanshi);
    int len=strlen(yuanshi);
    if(yuanshi[len-1]!='@') {printf("NO");return 0;}

    len-=1; //去掉@
    int v=0,u=0,m=0,z=0; // 
    for(int i=0;i<len;i++){
        m=0;
        if(yuanshi[i]==')') m=1;
        else if(yuanshi[i+1]==')'&&yuanshi[i]=='(') goto end;

        if(m==0){ //入栈模式
            if(isdigit(yuanshi[i])) {stack[v][1]=yuanshi[i];v++;} //数字入后缀式
            else{                                        //算数符入fu组
                if(yuanshi[i]!='+'&&yuanshi[i]!='-') {fu[u]=yuanshi[i];u++;} //乘除和"("直接入栈
                else{   //加减要处理优先级和符号
                    if(fu[u-1]=='*'||fu[u-1]=='/'){  //处理优先级
                        u--; //到乘除的位置
                        stack[v][1]=fu[u];v++; //把乘除出栈
                    }

                    if(yuanshi[i]=='+') {fu[u]=yuanshi[i];u++;} //加号直接入fu栈
                    else if (yuanshi[i]=='-')
                    {
                        if(yuanshi[i+2]==')'&&yuanshi[i-1]=='('){ //负号非运算符，为正负
                            stack[v][0]=1; //标记下一个数为负数，检索下一个
                        }else{                      //负号为运算符
                            fu[u]=yuanshi[i];u++;
                        }
                    }
                }
            }
        }else if (m==1) //出栈模式
        {   
            u--;
            for(;fu[u]!='(';u--){
                // printf("这里！");
                stack[v][1]=fu[u];v++;
            }
        }
    }
    //u,v多一个空位
    u--;
    for(;u>=0;u--){  //剩余运算符入栈后缀式
        stack[v][1]=fu[u];v++;
    }
    printf("后缀式：");
    for(int i=0;i<v;i++){
        printf("%c",stack[i][1]);  
    }
    printf(" (%d个)\n",v);

    //后缀式入栈
    int k=0;
    for(int i=0;i<v;i++){
        if (isdigit(stack[i][1]))
        {
            js[k]=stack[i][1]-'0'; //数字入栈
            if(stack[i][0]==1) js[k]=-js[k]; //判断负数
            k++;  //准备下一位
        }else{
            k-=2; //回到上上位
            switch (stack[i][1])
            {
            case '+':js[k]+=js[k+1];break;
            case '-':js[k]-=js[k+1];break;
            case '*':js[k]*=js[k+1];break;
            case '/':js[k]/=js[k+1];break;
            
            default:
                end:
                printf("NO");
                return 0;
            }
            if (k==0) {printf("%d",js[k]);return 0;}
            else k++; //准备下一位
        }
    }

}
