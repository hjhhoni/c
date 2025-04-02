#include <stdio.h>
int n,shu=1,xj=1,yj=1;
int c[1001][1001]={0};
int she(int ns,int x,int y,int z){
    if(ns>n){
        if(z%2==1){
            if(shu==n*n+1) return 0;
            if(x==xj) {c[x][y]=shu;shu++;return she(ns-1,x,y+1,0);}
            else {c[x][y]=shu;shu++;return she(ns,x-1,y+1,z);}
        }else if (z%2==0)
        {
            if(shu==n*n+1) return 0;
            if(y==yj) {c[x][y]=shu;shu++;return she(ns-1,x+1,y,1);}
            else {c[x][y]=shu;shu++;return she(ns,x+1,y-1,z);}
        }
    }else{
        xj=n,yj=n;
        if(z%2==1){
            if(shu==n*n+1) return 0;
            if(y==yj) {c[x][y]=shu;shu++;return she(ns-1,x+1,y,0);}
            else {c[x][y]=shu;shu++;return she(ns,x-1,y+1,z);}
        }else if (z%2==0)
        {
            if(shu==n*n+1) return 0;
            if(x==xj) {c[x][y]=shu;shu++;return she(ns-1,x,y+1,1);}
            else {c[x][y]=shu;shu++;return she(ns,x+1,y-1,z);}
        }
    }

}
int main() {
    scanf("%d",&n);
    int x=1,y=1,z=1;
    she(n*2-1,x,y,z);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
