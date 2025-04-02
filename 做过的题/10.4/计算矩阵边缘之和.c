#include<iostream>
using namespace std;
int main(){
	int m,n;
	int sum=0;
	int num[100][100];
	cin >> m >> n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> num[i][j];
			if(i==0||j==0||i==(m-1)||j==(n-1)){
				sum+=num[i][j];
			}
		}
	}
	cout << sum << endl; 
	return 0;
}
