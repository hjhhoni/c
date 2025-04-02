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
    for(int i=1;i<=n;i++){  //长度
        for(int j=0;j<=n-i;j++){  //起点变化
            int f=1;
            for(int k=j;k<j+i/2;k++){  
                if(a[k]=='a'||a[k]=='o'||a[k]=='i'||a[k]=='u'||a[k]=='e'){
                    if(a[k]==a[j+i-k-1]){

                    }else{
                        f=0;
                        break;
                    }
                }else
                {
                    f=0;
                    break;
                }  
            }
            if(f){
                int v=i;
                if(j!=0) v++;
                m=m>v?m:v;
            }
        }
    }
    
    printf("%d",m);
}
