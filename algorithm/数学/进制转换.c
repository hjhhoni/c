#include <stdio.h>
int a[1025],k=0;
char b[1025];
int gcd(int x,int m)
{
    if (m>10) //16进制
    {
        if(x/m!=0) {
            if (x%m<10)
            {
                b[k]=x%m+48;
            }else{
                switch (x%m)
                {
                    case 10: b[k]='A';break;
                    case 11: b[k]='B';break;
                    case 12: b[k]='C';break;
                    case 13: b[k]='D';break;
                    case 14: b[k]='E';break;
                    case 15: b[k]='F';break;
                }
            }
            
            k++;
            return gcd(x/m,m);
        }else{
            if (x%m<10)
            {
                b[k]=x%m+48;
            }else{
                switch (x%m)
                {
                    case 10: b[k]='A';break;
                    case 11: b[k]='B';break;
                    case 12: b[k]='C';break;
                    case 13: b[k]='D';break;
                    case 14: b[k]='E';break;
                    case 15: b[k]='F';break;
                }
            }
            for(int i=k;i>=0;i--){
                printf("%c",b[i]);
            }
            return 0;
        }


    }else{
        //其他进制
        if(x/m!=0) {a[k]=x%m;k++;return gcd(x/m,m);}
        else{
            a[k]=x%m;
            for(int i=k;i>=0;i--){
                printf("%d",a[i]);
            }
            return 0;
        } 
    }
    
}

int main()
{
    int x, m;
    
    scanf("%d %d", &x, &m);
    gcd(x,m);
    return 0;
}