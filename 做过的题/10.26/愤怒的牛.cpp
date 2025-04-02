#include <iostream>
#include <algorithm>
using namespace std;
int n,c,a[100010];

int check(int mid){
	int i=1,now=1,shu=0;
	while (i<n)
	{
		i++;
		if(a[i]-a[now]>=mid){
			shu++;
			now=i;
		}
	}
	if(shu+1==c) return 1;  //可以在最小的一个的基础上迭代出俩个之间的距离大于它即可（c为3时）
	else return 0;
}
int main() {
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int l=0,r=a[n];
	while (l<r)
	{
		int mid=l+r+1>>1;
		if(check(mid)) l=mid;
		else r=mid-1;
	}
	cout<<l;
	return 0;
}