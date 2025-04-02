#include <stdio.h>
int a[102][102]={0},book[102][102]={0},R,C;
int dfs(int y,int x){
    if (book[y][x] != 0) return book[y][x];
    book[y][x]=a[y][x];
    //向右
    if(x+1<=C){int len=dfs(y,x+1)+a[y][x];book[y][x]=book[y][x]>len?book[y][x]:len;}
    //向下
    if(y+1<=R){int len=dfs(y+1,x)+a[y][x];book[y][x]=book[y][x]>len?book[y][x]:len;}

    return book[y][x];
}
int main() {
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){ //多少组
        scanf("%d %d",&R,&C);
        for(int i=1;i<=R;i++){  //初始化book
            for(int j=1;j<=C;j++){
                book[i][j]=0;
            }
        }
        for(int i=1;i<=R;i++){  //输入花生数
            for(int j=1;j<=C;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int max=0;
        int len=dfs(1,1);
        max=max>len?max:len;
    
        printf("%d\n",max);
    }
}
