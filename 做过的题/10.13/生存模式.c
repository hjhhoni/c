#include <stdio.h>

int main() {
    int t,time;
    scanf("%d %d",&t,&time);
    for(int i=1;i<=t;i++){
        int p,x;
        scanf("%d",&p);
        if(p!=3){
            scanf("%d",&x);
        }
        if(p==1){
            time+=x;
            if(time>=24000) time-=24000;
        }else if (p==2)
        {
            time=x;
        }else if (p==3)
        {
            if(time>=0&&time<12000) printf("day\n");
            if (time>=12000&&time<13800) printf("sunset\n");
            if(time>=13800&&time<22200) printf("night\n");
            if(time>=22200) printf("sunrise\n");
          
            
        }
        
        
    }
}
