#include <stdio.h>
char a[100010];
int main(){
    int n,k=1;
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;i<n;i++){
        if (a[i]=='a'||a[i]=='o'||a[i]=='i'||a[i]=='u'||a[i]=='e')
        {
            k=0;
            break;
        }
    }
    if (k==1)
    {
        printf("%d",n);
        return 0;
    }
    
    int m=0;
    for(int i=0;i<n;i++){
        int f=1;
        
        for(int j=0;j<i/2;j++){
            if ((a[j]==a[i-j])&&(a[j]=='a'||a[j]=='o'||a[j]=='i'||a[j]=='u'||a[j]=='e'))
            {
            }else
            {
                f=0;
                break;
            }
            
        }
        if(f){
            m=m>i?m:i;
        }
    }
    
    printf("%d",m+1);
}
