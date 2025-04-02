#include <stdio.h>
int main(){
    // 车厢调度,栈
    int n,a,n1,n2,n3,f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if (i==1&&a!=1)
        {
            n1=a-1; //C中的
            n2=a+1; //A中第一个
            n3=a+2; //A中第一个之后的
        }else{
            if (a!=n1&&a<n2)  //下一个不属于以上三种情况
            {
                f=0;
                break;
            }else{
                if (a==n1)
                {
                    n1=a-1;
                }else if (a==n2)
                {
                    n2=n3;
                    n3=n2+1;
                }else{
                    n1=a-1;
                    n2=a+1;
                    n3=a+2;
                }
            }
            
        }
        
    }
    if (f==1)
    {
        printf("YES");
    }else if (f==0)
    {
        printf("NO");
    }
    
    
    
}