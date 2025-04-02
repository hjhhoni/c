#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (n<=2)
    {
        printf("true");
    }else{
        int l=0,r=n-1;
        for(int i=1;i<n;i++){
            if (arr[l]==i)
            {
                l+=1;
            }else if (arr[r]==i)
            {
                r-=1;
            }else
            {
                printf("false");
                return 0;
            }
        }
        
        printf("true");
    }
    
}
