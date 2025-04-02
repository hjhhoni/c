#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)//判断n是否是质数 
{
    for(int i = 2; i <= sqrt(n); ++i)
        if(n % i == 0)
            return false;
    return true;
}
bool isPal(int n)//判断两位或三位数n是否是回文数
{//判断最高位与最低位是否相等 
	int g, d;//g:最高位 d:最低位
	for(int a = n; a > 0; a /= 10)
		g = a % 10;
	d = n % 10;
	return g == d; 
}
int main()
{
    int n, s = 0;//s：计数 
    cin >> n;
    for(int i = 11; i <= n; ++i)
    {
        if(isPrime(i) && isPal(i))
            s++;
    }
    cout << s;
    return 0;
}