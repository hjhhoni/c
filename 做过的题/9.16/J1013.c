#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int c[s][2];
    for(int i=0;i<s;i++){
        scanf("%d %d",&c[i][0],&c[i][1]);
    }
    int n,m,k,k1;
    for(int i=1;i<=s;i++){
        n=c[i-1][0];m=c[i-1][1];
        if(n%2==0){
            return 1;
        }
        k=m;k1=n;
        for(;m>=1;m--){
            int l=1,r=n;
            //第一个打出完整的X
            if (m==k)
            {
                for(int i=1;i<=n;i++){  //行数

                    for(int j=1;j<=n;j++){  //第一行
                        if (j==l||j==r)
                        {
                            printf("X");
                        }else{
                            printf(" ");
                        }
                    }

                    printf("\n");
        
                    if (i<=(n-1)/2)
                    {
                        l+=1;
                        r-=1;
                    }else{
                        l-=1;
                        r+=1;
                    }
                }
            }else{ //后面的m-1个X都不打第一行,拼接成DNA
                for(int i=1;i<=n;i++){  //行数
                    if (i!=1)
                    {
                        for(int j=1;j<=n;j++){  //第一行
                            if (j==l||j==r)
                            {
                                printf("X");
                            }else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                    if (i<=(n-1)/2)
                    {
                        l+=1;
                        r-=1;
                    }else{
                        l-=1;
                        r+=1;
                    }
                }
            }
        }
        printf("\n");
    }


}