#include <iostream>
using namespace std;
#define MAXSIZE 100 // 定义最大容量

typedef char ElemType; // 定义数据类型

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

// 初始化一个空的顺序表，分配空间
void InitList(SqList *&L)
{
    L = new SqList;
    fill_n(L->data, MAXSIZE, '\0'); // 置空，方便返回错误
    L->length = 0;
}
// 尾插法插入元素
void Insert(SqList *L, ElemType e)
{
    if (L->length >= MAXSIZE) // 顺序表已满
        cout << "顺序表已满！" << endl;
    else
    {
        L->data[L->length] = e;
        L->length++;
    }
}
// 输出顺序表
void Display(SqList *L)
{
    for (int i = 0; i < L->length; i++)
        cout << L->data[i] << " ";
    cout << endl;
}
// 输出顺序表长度
void GetLength(SqList *L)
{
    cout << "顺序表长度为：" << L->length-1 << endl;
}
// 判断顺序表是否为空
bool IsEmpty(SqList *L)
{
    return L->length == 0;
}
// 按位置查找元素
char Locate(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length) return 0;
    else {
        if(L->data[pos-1]) return L->data[pos-1];
        else return 0;
    }
}
// 按值查找元素
int SearchbyValue(SqList *L, ElemType e)
{
    for (int i = 0; i < L->length; i++)
        if (L->data[i] == e) return i+1;
    return 0;
}
// 在指定位置前插入元素（位置从1开始，故从位置i之前插入可以符合空表的插入逻辑）
void InsertBefore(SqList *L, int pos, ElemType e)
{
    if (pos < 1 || pos > L->length+1) // 位置不合法
        cout << "位置不合法！" << endl;
    else if (L->length >= MAXSIZE) // 顺序表已满
        cout << "顺序表已满！" << endl;
    else
    {
        for (int i = L->length; i >= pos-1; i--)
            L->data[i+1] = L->data[i]; // 后移元素
        L->data[pos-1] = e;
        L->length++;
    }
}
// 删除指定位置元素
void Delete(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length) // 位置不合法
        cout << "位置不合法！" << endl;
    else
    {
        for (int i = pos-1; i < L->length-1; i++)
            L->data[i] = L->data[i+1]; // 前移元素
        L->data[L->length-1] = '\0'; // 置空最后一个元素
        L->length--;
    }
}
// 销毁顺序表
void DestroyList(SqList*& L)
{
    delete L;
    L = NULL;
    cout << "顺序表已销毁！" << endl;
}
int main()
{
    char a[] = "abcde";
    SqList *L = new SqList;
    InitList(L); // 初始化一个空的顺序表
    for(auto i:a) Insert(L,i); // 依次插入
    Display(L); // 输出
    GetLength(L); // 输出长度
    if(IsEmpty(L)) cout << "顺序表为空！" << endl; // 判断是否为空
    else cout << "顺序表不为空！" << endl;
    int i6, i8,i10;char e7, e8;
    cout<<"您要输出第几个元素？"<<endl;
    cin>>i6;
    if(Locate(L,i6)) cout<<"第"<<i6<<"个元素为："<<Locate(L,i6)<<endl; // 按位置查找元素
    else cout<<"不存在该元素！"<<endl;
    cout<<"请输入要查找的元素："<<endl;
    cin>>e7;
    if(SearchbyValue(L,e7)) cout<<"元素"<<e7<<"在第"<<SearchbyValue(L,e7)<< "个位置！"<<endl; // 按值查找元素
    else cout<<"不存在该元素！"<<endl;
    cout<<"请输入要插入的元素的位置及其值（空格分开）："<<endl;
    cin>>i8>>e8;
    InsertBefore(L,i8,e8); // 在指定位置前插入元素
    Display(L); // 输出
    cout<<"请输入要删除的位置："<<endl;
    cin>>i10;
    Delete(L,i10); // 删除指定位置元素
    Display(L); // 输出
    DestroyList(L); // 销毁顺序表
}