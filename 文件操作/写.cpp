#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
typedef long long ll;

void solve(){
    FILE *fp1,*f;
    // 写文件
    // if ((fp1 = fopen("try.txt","w"))==NULL) // fopen函数打开文件
    // {
    //     cout<<"can't open file";
    // }
    // char ch;
    // ch = getchar();
    // while (ch!='#')
    // {
    //     fputc(ch,fp1);  // fputc把字符写入文件
    //     ch = getchar();
    // }

    // 读文件
    // 法一
    // f = fopen("try.txt","r");
    // char ch = fgetc(f);  // 读取文件的字符
    // while (!feof(f))  // feof()作用是通常用于循环读取文件内容时，判断是否已经读取到文件末尾
    // {
    //     putchar(ch);
    //     ch = fgetc(f);
    // }
    // 此时指针f在文件末尾
    // 法二
    f = fopen("try.txt","r");
    char c = fgetc(f);
    while (c!=EOF)
    {
        putchar(c);
        c = fgetc(f);
    }
    
    fclose(f);
    // fclose(fp1);  // 关闭文件
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}