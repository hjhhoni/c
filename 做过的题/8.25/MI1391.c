#include <stdio.h>
int main(){
    //画矩形
    int x,y,m;
    char f;
    scanf("%d %d %c %d",&y,&x,&f,&m);
    if (m==0)
    {   //y
        for (int i=1;i<=y;i++)
        {   //x
            if (i==1||i==y)
            {
                for(int ii=1;ii<=x;ii++){
                    if (ii==x)
                    {
                        printf("%c\n",f);
                    }else{
                        printf("%c",f);
                    }
                    
                }
            }else
            {
                for(int ii=1;ii<=x;ii++){
                    if(ii==1){
                        printf("%c",f);
                    }
                    if(ii==x){
                        printf("%c\n",f);
                    }
                    if (ii!=1&&ii!=x)
                    {
                        printf(" ");
                    }
                    
                }
            }
            
        }
        
    }else if (m==1)
    {
        for (int i=1;i<=y;i++)
        {
            for (int j=1;j<=x;j++)
            {
                if (j==x)
                {
                    printf("%c\n",f);
                }else{
                    printf("%c",f);
                }
                
            }
            
        }
        
    }
    
    
}