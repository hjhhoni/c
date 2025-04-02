#include <stdio.h>
int arr[100001],n;
void quick(int l,int r){
    int k=r;
    if(r==l||r<0||l>k) return;

    int pivot=arr[l]; //枢轴
    int m=1; //m为1时从右往左边扫
    for(;;){
        if(l==r) break;
        if (m==1)
        {
            if (arr[r]<=pivot)
            {
                arr[l]=arr[r];
                m=0;
                continue;
            }
            r--;
        }else{
            if (arr[l]>pivot)
            {
                arr[r]=arr[l];
                m=1;
                continue;
            }
            l++;
        }
    }
    // 此时l==r;
    arr[r]=pivot;
    quick(0,r-1); //左边
    quick(r+1,k); //右边
    return;
}
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quick(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
