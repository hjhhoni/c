#include <stdio.h>


int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b)&&(a!=0&&b!=0))
    {
        int sum=a*100;
        for(int i=0;i<100;i++){
            if ((sum+i)%b==0)
            {
                printf("%02d ",i);
            }
        }
        printf("\n");
    }
    
}
