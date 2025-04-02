#include<stdio.h>
int main() {
    int a,n,max;
    int c[20];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a);
        c[i] = a;
    }
    for(int i = 0; i < n; i++) {
        max = c[i];
        for(int j = i+1; j < n; j++) {
            if (c[j] > max) {
                max = c[j];
                c[j] = c[i];
                c[i] = max;
            }
        }
        printf("%d\n", c[i]);
    }
    return 0;
}