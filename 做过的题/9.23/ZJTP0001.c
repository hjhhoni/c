#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    // 二进制转十进制
    char a[7];
    int sum=0,la;
    scanf("%s",&a);
    la=strlen(a);
    for(int i=la-1;i>=0;i--){
        sum+=(a[la-1-i]-'0')*pow(2,i);
    }
    printf("%d",sum);
	return 0;
}
