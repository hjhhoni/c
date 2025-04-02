#include <stdio.h> 
#include <string.h>
int n,k; 
char Chess[10][10];//用来记录棋盘 
int sign[8];//用来标记该列是否被占用，占用为1否则为0 
int sum;//统计情况 
 
void DFS(int r,int l) { 
    //递归结束条件：棋子用完
    if(l==0){ 
        ++sum;//棋子可以用完表示该从上到底的情况可行，计入sum 
        return;//回溯上一层，进行下层递归 
    } 
    int i,j; 
    //i=r的妙用，可以使每一层都在该行往下找，实现了k<n时放棋子的多样性解决
    for(i=r;i<n;i++) { 
        //每一列要从头判断，因每一行只放一个棋子，因此只判断列即可
        for(j=0;j<n;j++) { 
            //sign[j]==1表示该列在前面已经有棋子，不可再放了 
            if(Chess[i][j]=='.'||sign[j]==1) continue; 
            sign[j]=1;//若没有则可以放，并且标记 
            DFS(i+1,l-1);//在该行该棋子数目状态下向下递归 
            sign[j]=0;//回来后恢复原状态，进行j++下一个标记递归！ 
        } 
    } 
} 
 
int main() { 
    while(scanf("%d%d",&n,&k)!=EOF&&n!=-1) { 
        sum=0; 
        memset(Chess,0,sizeof(Chess)); 
        memset(sign,0,sizeof(sign));//清空清零 
        int i; 
        for(i=0;i<n;i++) 
            scanf("%s",Chess[i]);
        DFS(0,k);//从第零行开始，初始时棋子 
        printf("%d\n",sum); 
    } 
    return 0; 
}