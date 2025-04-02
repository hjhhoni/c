#include <stdio.h>
#include <math.h>
int cha(int arr[],int v){
    for(int i=v;i>=2;i--){  //从最高位开始循环
        if(arr[i]>arr[i-1]){ //若大于低位
            arr[i]-=1;   //自减1
            while(arr[i]<arr[i+1]){ //往回看上一个是否大于
                i++;
                arr[i]-=1;
            }
            for(int j=i-1;j>=1;j--){  //其后为9
                arr[j]=9;
            }
        }
    }
    int sum=0;
    for(int i=v;i>=1;i--){
        sum+=arr[i]*pow(10,i-1);
    }
    return sum;
}
int main() {
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int arr[11]={0},v=0,dn=n; //分割数字并用v计算位数
        for(;dn>0;dn/=10){
            v++;
            arr[v]=dn%10;  //从个位开始记忆，对应v为1
        }
        printf("%d\n",cha(arr,v));
    }
    
}