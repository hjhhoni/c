#include <iostream>
using namespace std;
int n,a[101][101][101],b[101][101][101];  //a数组记录地图，b数组记忆化剪枝
int Max=0;
int d[6][3]={{0,0,-1},{0,0,1},{1,0,0},{-1,0,0},{0,1,0},{0,-1,0}}; //方位数组
void dfs(int i,int j,int k){
    int f=0;  //标记能不能往下走
    for(int v=0;v<6;v++){
        int ti=i+d[v][0],tj=j+d[v][1],tk=k+d[v][2];
        if (ti>=1&&tj>=1&&tk>=1&&ti<=n&&tj<=n&&tk<=n&&a[i][j][k]<a[ti][tj][tk])
        {
            f=1;  //可以往下走
            if (b[ti][tj][tk]<b[i][j][k]+1) //看看是否为最佳,最佳才走
            {
                b[ti][tj][tk]=b[i][j][k]+1;
                dfs(ti,tj,tk);
            }
        }
    }
    if(f==0) Max=Max>b[i][j][k]?Max:b[i][j][k]; //没有下一步的可能时比较最大步数
    return;
}
int main() {
    int i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            for(k=1;k<=n;k++)
                scanf("%d",&a[i][j][k]);
    
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            for(k=1;k<=n;k++)
                if (b[i][j][k]==0)  //未走过才走
                {
                    b[i][j][k]=1;
                    dfs(i,j,k);
                }
    cout<<Max;
    return 0;
}