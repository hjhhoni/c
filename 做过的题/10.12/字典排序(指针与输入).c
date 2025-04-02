// #include <bits/stdc++.h> // 万能头文件，包含C++标准库的所有头文件
// using namespace std; // 使用标准命名空间
 
// int main() {
//     int c = 0; // 计数器，用于记录输入的字符串个数
//     string s[101]; // 字符串数组，存储输入的字符串
 
//     // 循环输入字符串数组s，直到遇到空字符串为止
//     for (; cin >> s[c]; c++);
 
//     // 对字符串数组s进行冒泡排序，按照字典序从小到大排序
//     for (int i = 0; i < c - 1; i++)
//         for (int j = i + 1; j < c; j++)
//             if (s[i] > s[j]) // 如果前一个字符串大于后一个字符串
//                 swap(s[i], s[j]); // 交换两个字符串的位置
 
//     // 输出排序后的第一个字符串
//     cout << s[0] << endl;
 
//     // 输出排序后的剩余字符串（不包括第一个字符串）
//     for (int i = 0; i < c - 1; i++)
//         if (s[i] != s[i + 1]) // 如果当前字符串与下一个字符串不相等
//             cout << s[i + 1] << endl; // 输出下一个字符串
 
//     return 0; // 程序正常结束
// }
#include <stdio.h>
#include <string.h>
char a[101][51]={"\0"};
int main() {
    int v=0;
    while (scanf("%s",a[v])!=EOF)
    {
        v++;
    }
    char *p[101]; //用指针数组记录字符串首字母
    for(int i=0;i<v;i++){
        p[i]=a[i]; 
    }
    //冒泡排序
    for(int i=0;i<v;i++){
        for(int j=i;j<v;j++){
            if(*p[i]>*p[j]) {char *temp;temp=p[i];p[i]=p[j];p[j]=temp;}
        }
    }
    // 输出排序后的字符串
    for (int i = 0; i < v; i++) {
        // 直接用 %s 输出字符串,上一个不相同的话
        if(i>0&&strcmp(p[i],p[i-1])!=0) printf("%s\n", p[i]); 
        else if(i==0) printf("%s\n", p[i]);
    }
}