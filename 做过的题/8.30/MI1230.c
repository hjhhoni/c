#include <stdio.h>
int main(){
    // 开关灯
    int N,M;
    scanf("%d %d",&N,&M);
    int c[N];
    // 初始化,所有灯0为开
    for(int i=0;i<N;i++){
        c[i]=0;
        // printf("%d",c[i]);
    }
    // 循环M次，对应每个人的行为
    for(int i=1;i<=M;i++){

        for (int j=1;j<=N;j++)
        {
            if (i==1)
            {
                c[j-1]=1;
            }else if (i==2)
            {
                if (j%i==0)
                {
                    if (c[j-1]==0)
                    {
                        c[j-1]=0;
                    }else{
                        c[j-1]=0;
                    }
                }
            }else{
                if (j%i==0)
                {
                    if (c[j-1]==0)
                    {
                        c[j-1]=1;
                    }else{
                        c[j-1]=0;
                    }
                }
            }
            
            
        }
        
    }
    int m=0,n=0;
    for(int i=0;i<N;i++){
        if (c[i]==1)
        {
            m+=1;
        }
    }
    for(int i=0;i<N;i++){
        if (c[i]==1&&n<m-1)
        {
            n+=1;
            printf("%d,",i+1);
        }else if (c[i]==1&&n==m-1)
        {
            printf("%d",i+1);
        }
        
    }
}