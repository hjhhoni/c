#include <stdio.h>
#include <string.h>
int main(){
    // 扫雷
    int n,m;
    scanf("%d %d",&n,&m);
    char c[m*n];
    char d[]={'?'};
    int i=0,j=0;
    for(;i<m*n;i+=m){
        scanf("%s",&c[i]);
        
    }
    // printf("%s",c[0,2]);
    // 检测前后n+1个数，看第一个与最后三个
    for (;j<m*n;j++)
    {
        if (c[j]==d[0])
        {
            int a=0;
            // 前
            // 判断八个方向
            // 左上
            if((j-m-1)>=0&&(j-m-1)%m!=m-1){
                char d[]={'*'};
                if(c[j-m-1]==d[0]){
                    a+=1;
                }
            }
            // 上
            if((j-m)>=0){
                char d[]={'*'};
                if(c[j-m]==d[0]){
                    a+=1;
                }
            }
            // 右上
            if((j-m+1)>=0&&(j-m+1)%m!=0){
                char d[]={'*'};
                if(c[j-m+1]==d[0]){
                    a+=1;
                }
            }
            // 左
            if((j-1)>=0&&(j-1)%m!=m-1){
                char d[]={'*'};
                if(c[j-1]==d[0]){
                    a+=1;
                }
            }
            // 右
            if((j+1)<n*m&&(j+1)%m!=0){
                char d[]={'*'};
                if(c[j+1]==d[0]){
                    a+=1;
                }
            }
            // 左下
            if((j+m-1)<n*m&&(j+m-1)%m!=m-1){
                char d[]={'*'};
                if(c[j+m-1]==d[0]){
                    a+=1;
                }
            }
            // 下
            if((j+m)<n*m){
                char d[]={'*'};
                if(c[j+m]==d[0]){
                    a+=1;
                }
            }
            // 右下
            if((j+m+1)<n*m&&(j+m+1)%m!=0){
                char d[]={'*'};
                if(c[j+m+1]==d[0]){
                    a+=1;
                }
            }
            c[j]='0'+a; // 将整数转换为字符
        }
        if(j>=m-1&&(j+1)%m==0){
            printf("%c\n",c[j]);
        }else{
            printf("%c",c[j]);
        }
    }
} 