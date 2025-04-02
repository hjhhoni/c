#include <stdio.h>
int main(){
    // 最长平台
    int n,a,shu=0,ci=1,mci=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if (a==shu&&i!=0)
        {
            ci++;
            if (ci>mci)
            {
                mci=ci;
            }
        }else if (a!=shu)
        {
            shu=a;
            if (ci>mci)
            {
                mci=ci;
            }
            ci=1;
        }else if (i==0&&a==0)
        {
            ci=1;
        }
        
    }
    printf("%d",mci);
}