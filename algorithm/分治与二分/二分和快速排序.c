#include <stdio.h>
#include <stdlib.h> //快速排序的函数所在

// 比较函数，用qsort时需要
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int minCha(int x, int arr[], int L, int R,int min) {
	int mid = arr[(R + L) / 2];
	//出口 
    if (R == L) {
        int d=x - arr[L];
        if(d<0) d=arr[L]-x;
        if(d<min) min=d;
        return min;
    }
    
    if (x > mid) {
        if(x-mid<min) min=x-mid;
        return minCha(x, arr, (R + L) / 2 + 1, R,min);
    } else if (x < mid) {
        if(mid-x<min) min=mid-x;
        return minCha(x, arr, L, (R + L) / 2,min);
    } else if(x==mid||min==0){
        return 0; // x == mid
    }
}

int main(){
    int n;
    int minCha(int x, int arr[], int L, int R,int min);
    scanf("%d",&n);
    int a[n],b,min=1000000,mmin;

    //输入a
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(a[0]), compare); //给a数组排序以便二分
    // 输入b

    for(int i=0;i<n;i++){
        scanf("%d",&b);
        mmin=minCha(b,a,0,n-1,min);
        if(mmin==0){
            printf("0");
            return 0;
        }
        if (mmin<min)
        {
            min=mmin;
        }
    }
    printf("%d",min);
    return 0;
}