#include <stdio.h>
int a[502][502]={0},R,C,max=0,is,js,fen=0;
void dfs(int y,int x,int shang){ //y是行,x是列
    fen++; //进入到一个点加一
    if(x>C||x<1||y>R||y<1||a[y][x]>shang){
        fen--;max=max>fen?max:fen; //减一对比该路径与最大值
        return ; //回头
    }
    dfs(y-1,x,a[y][x]); //下
    dfs(y+1,x,a[y][x]); //上
    dfs(y,x+1,a[y][x]); //右
    dfs(y,x-1,a[y][x]); //左
    fen--; //以每个节点为起点的生枝结束
    return ; //退出节点

}
int main() {
    scanf("%d %d",&R,&C);
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int is=1;is<=R;is++){ //行
        for(int js=1;js<=C;js++){ //列
            dfs(is,js,a[is][js]);
        }
    }
    printf("%d",max);
}
