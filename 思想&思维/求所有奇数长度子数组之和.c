int sumOddLengthSubarrays(int* arr, int arrSize){
    int ans = 0;

    int endIndex = arrSize - 1;
    for (int i = 0; i <= endIndex; i++) {
        int leftCount = i;
        int rightCount = endIndex - i;
        int leftOdd = (leftCount + 1) / 2;
        int rightOdd = (rightCount + 1) / 2;
        int leftEven = leftCount / 2 + 1;
        int rightEven = rightCount / 2 + 1;
        //每个数字乘以在子数组出现的次数
        ans += arr[i] * (leftOdd * rightOdd + leftEven * rightEven);
    }

    return ans;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    printf("%d",sumOddLengthSubarrays(c,n));
}
