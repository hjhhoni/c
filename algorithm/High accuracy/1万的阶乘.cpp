#include <iostream>
#include <cstring>
using namespace std;
int num[100000];
int main(){
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		memset(num,0,sizeof(num));
		num[0] = 1; //num[0]放进位
		num[1] = 1;

		for(int i = 2; i <= n; i++){
			int temp = 0;		//temp 代表着进位数
			for(int j = 1; j <= num[0]; j++){
				long long sum=num[j]*i+temp;
				num[j]=sum%1000;
				temp=sum/1000;
			}
			
			while(temp){
				num[0]++;	
				num[num[0]] = temp % 1000;	//每次存3位
				temp = temp / 1000;
			}
		}

		for(int i = num[0]; i >= 1; i--){
			if(i!=num[0])printf("%03d",num[i]);   //%03d的目的是补齐0
			else cout<<num[i];
		}
		cout<<endl;
	}

}

