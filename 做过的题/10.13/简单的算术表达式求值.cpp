#include<bits/stdc++.h>
using namespace std;
int calc(int a, int b, char c)//返回数字a，b通过运算符c运算后得到的结果 
{
	switch(c)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		case '%':
			return a % b;
	}
}
int main()
{
  	int a, b;
  	char c;
  	cin >> a >> c >> b;
  	cout << calc(a, b, c);
    return 0;
}