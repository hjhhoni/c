#include <iostream>
using namespace std;
int map[5][6],qx,qy,count=0;
int d[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};
void dfs(int x,int y){
    map[x][y]++;
    if(x==qx&&y==qy&&map[x][y]==1) {
        count++;
        map[x][y]=0;
        return;
    }
    for(int i=0;i<8;i++){
        int tx=x+d[i][0],ty=y+d[i][1];
        if(tx>=1&&tx<=4&&ty>=1&&ty<=5&&map[tx][ty]==0){
            dfs(tx,ty);
        }
    }
    map[x][y]--;
    return;
}

int main() {
    cin>>qx>>qy;
    if(qx<1||qx>4||qy<1||qy>5) cout<<"ERROR";
    map[qx][qy]=-1;
    dfs(qx,qy);
    cout<<count;
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// int map[10][10];
// int dire[8][2]={{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
// int sum;
// int n,m;
// void fun(int x,int y);
// int main()
// {
//     scanf("%d%d",&m,&n);
//     if(m>4||n>5||m<=0||n<=0)
//     {
//         printf("ERROR\n");
//         return 0;
//     }
//     memset(map,0,sizeof(map));
//     fun(m,n);
//     printf("%d",sum);
//     return 0;
// }
// void fun(int x,int y)
// {
//     int i;
//     for(i=0;i<8;i++)
//     {
//         int xx;
//         int yy;
//         xx=x+dire[i][0];
//         yy=y+dire[i][1];
//         //if(xx<=0||yy<=0||xx>4||yy>5||map[xx][yy]==1) {return ;}
//         if(xx>0&&yy>0&&xx<=4&&yy<=5&&map[xx][yy]!=1)
//         {
//             if(xx==m&&yy==n)
//             {sum++;}
//             else
//             {
//                 map[xx][yy]=1;
//                 fun(xx,yy);
//                 map[xx][yy]=0;
//             }
//         }
//     }
// }