#include <stdio.h>
int ge[9][9],hang[9][10],lie[9][10],zhen[3][3][10],f=0; 
void dfs(int h,int l){

    if(h>8) {f=1;return;}  //完成数独
    else if(ge[h][l]!=0){  //不填数
        if(l==8) dfs(h+1,0);
        else dfs(h,l+1);
        return;
    }else if (l>8) //换行
    {
        dfs(h+1,0);
        return;
    }
    
    //填数
    for(int i=1;i<=9;i++){
        if(hang[h][i]==0&&lie[l][i]==0&&zhen[h/3][l/3][i]==0){
            ge[h][l]=i;
            hang[h][i]=1;
            lie[l][i]=1;
            zhen[h/3][l/3][i]=1;
            dfs(h,l+1);
            if(f==1) break;
            ge[h][l]=0;
            hang[h][i]=0;
            lie[l][i]=0;
            zhen[h/3][l/3][i]=0;
        
        }
    }
    
    return;
}
int main() {
    for(int i=0;i<9;i++){  //输入数独
        for(int j=0;j<9;j++){
            scanf("%d",&ge[i][j]);
            if(ge[i][j]!=0){
                hang[i][ge[i][j]]=1; //标记该行的ge[i][j]已有
                lie[j][ge[i][j]]=1; //标记该列的ge[i][j]已有
                zhen[i/3][j/3][ge[i][j]]=1; //标记该正方形的ge[i][j]已有
            }
        }
    }

    dfs(0,0);
    
    for(int i=0;i<9;i++){  //输出数独
        for(int j=0;j<9;j++){
            printf("%d ",ge[i][j]);
        }
        printf("\n");
    }
}
