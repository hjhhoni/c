#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
const int M = 1e5+7;
typedef char ElemType;  //定义顺序表元素
typedef struct{
    ElemType data[M];  //线性表数据
    int length;  // 长度
}SqList;
// 知识点
// 1.对顺序表进行操作的都要加&，除非用指针之后返回新的指针，否则顺序表不会改变
// 2.不改变顺序表的操作不需要加&，如判断是否为空，获取长度等
// 建立顺序表
void CL(SqList *&L, ElemType a[], int n)
{
	L = new SqList;
	for(int i=0; i<n; i++)
	{
		L->data[i] = a[i];
	}
	L->length = 0;  // 有了*&L就无需返回指针，可在void里面操作
}

// 初始化顺序表
void InitL(SqList *&L)
{
	L = new SqList;
	L->length = 0;
}

// 销毁顺序表
void DelL(SqList *&L)
{
	delete L;
}

// 判断顺序表是否为空
bool isEmpty(SqList *L)  // 凡是没有对顺序表进行改变的都不需要加&
{
    return L->length == 0;
}
// 求顺序表的长度
int Length(SqList *L)
{
    return L->length;
}

// 获取顺序表某个元素
bool GetElem(SqList *L,int i,ElemType &e)
{
    if(i<1 || i>L->length) return false;
    e = L->data[i-1];
    return true;
}

// 输出顺序表
void DisL(SqList *L)
{
	if(isEmpty(L)) return;
	for(int i=0; i<L->length; i++)
	{
		cout<<L->data[i]<<" ";
	}
	cout<<endl;
}

// 插入顺序表
bool InL(SqList *&L,int i,ElemType e) //在第i个位置之前插入元素e
{
	if(i<1 || i>L->length+1) return false;
	i--; // 转化为实际位序
	// 后移元素腾位置
	for(int j=L->length; j>i; j--)
	{
		L->data[j] = L->data[j-1];
	}
	L->data[i] = e; // 插入元素到腾出的位置
	L->length++; // 长度加1
	return true;
}

// 删除顺序表第i个元素，按位置查找
bool Deli(SqList *&L,int i,ElemType &e) //删除第i个元素
{
	if(i<1 || i>L->length) return false;
	i--; // 转化为实际位序
	e = L->data[i];
	// 前移元素覆盖删除元素
	for(int j=i; j<L->length-1; j++)
	{
		L->data[j] = L->data[j+1]; 
	}
	L->length--; // 长度减1
	return true;
}

// 按元素值查找
int Locate(SqList *L,ElemType e)
{
	for(int i=0; i<L->length; i++)
	{
		if(L->data[i] == e) return i+1; // 返回位序
	}
	return 0; // 没找到返回0
}

void solve(){
	SqList *L1; //定义顺序表类型指针
	// 初始化顺序表
	InitL(L1);
}

int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t=1;//cin>>t;
	while(t--) solve();
	return 0;
}