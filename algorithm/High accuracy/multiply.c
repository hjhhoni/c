#include <stdio.h>
#include <string.h>
int main(){
    // 乘法
    char ca[100],cb[100];
    //数组要初始化为0
    int a[100]={0},b[100]={0},c[10000]={0},la,lb,lmax;
    scanf("%s",&ca);
    scanf("%s",&cb);
    la = strlen(ca);
    lb = strlen(cb);
    lmax = la+lb-1;
    for(int i=la-1;i>=0;i--){
        a[la-i-1]=ca[i]-'0';
    }
    for(int i=lb-1;i>=0;i--){
        b[lb-i-1]=cb[i]-'0';
    }

    for(int i=0;i<la;i++){
		for(int j=0;j<lb;j++){
            c[i+j]+=a[i]*b[j];
            if (c[i+j]>=10)
            {
                c[i+j+1]+=c[i+j]/10;
                c[i+j]=c[i+j]%10;
            }
		}
    }
    if (c[lmax]>0)
    {
        lmax+=1;
    }
    for(int i=lmax-1;i>=0;i--){
        printf("%d",c[i]);
    }
}