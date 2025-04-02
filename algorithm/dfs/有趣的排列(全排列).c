#include<stdio.h>
int a[16],book[16],n,count=0;

void  dfs(int step){ 
	int i;
	if(step==n+1){    
		count++;
		return ;

		
	}
	 for(int i=1;i<=n;i++){
		if(book[i]==0){  
			a[step]=i;
      if(a[step]%step!=0&&step%a[step]!=0) goto back; //剪枝优化
			book[i]=1;
			dfs(step+1);
				
      back:	
			book[i]=0;

		}
	}
	return;//这里表示这一级别的dfs函数已经结束了，返回上一级 dfs函数 

}
int main(){
	scanf("%d",&n);
	dfs(1);   //dfs函数的开始 
  printf("%d",count);
	return 0;
}
