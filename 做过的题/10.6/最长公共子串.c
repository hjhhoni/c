#include <stdio.h>
#include <string.h>
char S1[10000],S2[10000];
int main() {
    int c=0,mc=0;
    scanf("%s",S1);
    scanf("%s",S2);
    int lS1=strlen(S1),lS2=strlen(S2);
    if(lS1>lS2){
        for(int i=0;i<lS1;i++){ //遍历S2
            int v=i;
            for(int j=0;j<lS2;j++){
                if(c==lS2) {printf("%d",c);return 0;}
                if(S1[v]==S2[j]){
                    c++;v++;
                    mc=mc>c?mc:c;
                }else{
                    v=i;c=0;
                }
            }

        }
    }else
    {
        for(int i=0;i<lS2;i++){ //遍历S2
            int v=i;
            for(int j=0;j<lS1;j++){
                if(c==lS1) {printf("%d",c);return 0;}
                if(S2[v]==S1[j]){
                    c++;v++;
                    mc=mc>c?mc:c;
                }else{
                    v=i;c=0;
                }
            }

        }
    }
    printf("%d",mc);
    return 0;
}