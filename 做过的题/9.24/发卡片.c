#include <stdio.h>
int main(){
    /*n个人站成一排,
    你要给每个人发一张卡，
    只有3种类型的卡。发卡的时候，
    你需要保证任何相邻的两个人不能拿到相同类型的卡片，
    且最前面和最后面的人不能有相同类型的卡片。
    */
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if (n==0)
        {
            printf("0\n");
        }else if (n==1)
        {
            printf("3\n");
        }else if (n==2)
        {
            printf("6\n");
        }else{
            long long sum;
            // 每种开头的最后一次有多少个与开头相同的数
            long long a=2,b=0;
            for(int i=3;i<=n;i++){
                long long t=b;
                b=a-t;
                a*=2;
                sum=b+t*2;
            }
            sum*=3;
        

            printf("%lld\n",sum);
        }
    }
    
    
}