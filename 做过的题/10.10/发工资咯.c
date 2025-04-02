#include <stdio.h>
int qian[6]={100,50,10,5,2,1},zhang;
int suan(int x){
    if(x){
        for(int i=0;i<6;i++){
            if(x-qian[i]>=0){
                zhang++;
                return suan(x-qian[i]);
            }
        }
    }
}
int main() {
    int n;
    while (scanf("%d",&n)&&n)
    {
        zhang=0;
        for(int i=0;i<n;i++){
            int wage=0;//每个人的工资
            scanf("%d",&wage);
            suan(wage);
        }
        printf("%d\n",zhang);
    }
    
}
