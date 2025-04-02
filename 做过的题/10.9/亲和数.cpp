# include <iostream>  //输入输出流文件cin,cout
# include <iomanip>  //格式输出
# include <algorithm>  //算法，如快速排序
# include <cmath>  //数学函数
using namespace std;
int qh(int n){ 
	int sum=0;//定义一个求和数sum 
	for(int i=1;i<n;i++){//从1开始循环到n之前停止 
		if(n%i==0){//如果是n的因子累加 
			sum+=i;
		}
	}
	return sum;//返回求和数 
}
int main(){
	int a,b;//定义一对数字a,b 
	for(int a=0;;a++){//让a从0开始无限循环，并且累加1 
		b=qh(a);//令b的值等于a的因子之和 
		if(a==qh(b)){//如果b的因子之和等于a 
			if(a<b){//且条件给出a<b 
				cout<<a<<" "<<b<<endl;//中间有空格输出 
				break;//结束循环 
			}
		}
	}
}
 
 