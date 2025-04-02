#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[100001]={0},v=0;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a%2==1){
            arr[v]=a;
            v++;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<v;i++){
        printf("%d",arr[i]);
        if(i!=v-1) printf(",");
    }
}
