#include<iostream>
using namespace std;
int main()
{
	int N, b, sum, n;
	cin >> N;
	n = N;
	if (n < 0)
		n = -n;
	if (n % 10 == 0)
		n /= 10;
	sum = 0;
	while (n >= 1)
	{
		b = n % 10;
		sum = sum * 10 + b;
		n /= 10;
	}
	if (N < 0)
	{
		sum = -sum;
	}
	cout << sum;
	return 0;
}