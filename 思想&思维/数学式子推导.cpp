#include <iostream>
#include <cstdio>
using namespace std;
// 有一个n+2个元素a[0], a[1], …, a[n+1] (n <= 3000, -1000 <= a[i] <=1000)构成的数列.
// 已知对i=1, 2, …, n有a[i] = (a[i-1] + a[i+1])/2 - c[i].
// 给定a0, a[n+1], c[1], … , c[n]. 写一个程序计算a[1].

// 输入
// 第一行是整数n. 接下来两行是a[0]和a[n+1], 其小数点后有两位数字. 其后的n行为ci, 每行一个数.
//讲解链接
// https://blog.csdn.net/smileyan9/article/details/100942229?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-0-100942229-blog-82561339.235^v43^pc_blog_bottom_relevance_base3&spm=1001.2101.3001.4242.1&utm_relevant_index=1
// 计算数组中前size项之和
double Tn(double c[], int size)
{
    double result = 0.00;
    int i;
    for(i=1; i<=size; i++)
    {
        result += c[i];
    }
    return result;
}

// 记数组前i项的和为Ti 而Sn则是把所有的Ti加起来
double Sn(double c[], int n)
{
    int i;
    double result=0.00;
    for(i=1; i<=n; i++)
    {
        result += Tn(c,i);
    }
    return result;
}

// written by smileyan
int main()
{
    int n,i;
    double a[3002];
    double c[3000];
    cin>>n;
    cin>>a[0]>>a[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>c[i];
    }
	// 单纯地套公式计算就好了，是不是很简单？ 谢谢支持Smileyan！
    double y = (double((double)n*a[0]+(double)a[n+1])-2*Sn(c,n))/(n+1);
    printf("%.2lf\n",y);
    return 0;
}
