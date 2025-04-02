#include<bits/stdc++.h>
using namespace std;
 
bool a[15][15];//表示地图 
int t,n,m,x,y,ans;//x和y表示马初始的位置 
int dx[8]={-2,-1,1,2,2,1,-1,-2};//表示行的方向数组 
int dy[8]={1,2,2,1,-1,-2,-2,-1};//表示列的方向数组 
 
void dfs(int xx,int yy,int step)
{
	if(step==n*m)//如果遍历够了所有点 
	{
		ans++;//方案数加1 
		return ;
	}
		
	for(int i=0;i<=7;i++)//依次枚举八个方向 
	{
		int X=dx[i]+xx;//设置新的行号 
		int Y=dy[i]+yy;//设置新的列号 
		
		if(X<0||X>n-1||Y<0||Y>m-1)//如果越界则continue 
		continue;
		if(a[X][Y]==0)//如果这点没有走过 
		{
			a[X][Y]=1;//标记此点已经遍历 
			dfs(X,Y,step+1);//选择可行的方向继续递归 
			a[X][Y]=0;//回溯，撤销标记 
		}
	}
}
 
int main()
{
	cin>>t;
	 
	while(t--)//输入t组数据 
	{
		ans=0;//方案数初始化 
		cin>>n>>m>>x>>y;
		memset(a,0,sizeof(a));//清空地图
		a[x][y]=1;//起点已经走过 
		
		dfs(x,y,1);//开始搜索路线 
		cout<<ans<<endl;
	
	}
	return 0;
}