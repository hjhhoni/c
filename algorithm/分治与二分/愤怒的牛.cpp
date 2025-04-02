#include<iostream>
#include<algorithm>
using namespace std;

const int N=100010;
int a[N],n,m,maxa;

//注意：这是拿出来的那些里，mid为最短距离，和跳石头不同的是，跳石头是在留下的里面，mid为最短距离 
int check(int mid)
{
	//now为最后一次拿的瓶盖位置，i为当前遍历的位置
	int i=1,now=1,cnt=0; 
	while(i<n)  //遍历有序数组查看从元素几开始可以使距离大于折半距离
	{
		i++;
		if(a[i]-a[now]>=mid){ //保证拿走的瓶盖间距大于等于mid，才拿这个瓶盖，否则不能保证mid为最短距离
			now=i,cnt++;
		}
	}
	if(cnt+1>=m) return 1;	//如果拿出的总个数大于等于m，都能保证拿走的瓶盖间距大于等于mid，那拿出来m个，肯定也能满足！！
	return 0;

}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>maxa) maxa=a[i]; 
	}
	sort(a+1,a+n+1);
	
	int l=0,r=maxa;
	while(l<r) //模板2  //对距离折半
	{
		int mid=l+r+1>>1;
		if(check(mid)) l=mid;  //此条只执行一次，即l=r退出循环，结束程序
		else r=mid-1;  //此距离不可以取m个，就缩短距离
	}
	cout<<l<<endl;
	
}
