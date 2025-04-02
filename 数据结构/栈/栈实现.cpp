#include <iostream>
#include <cstdio>
using namespace std;
typedef char ElemType;
#define MaxSize 40
typedef struct
{
	ElemType data[MaxSize];
	int top;
	
}SqStack; 

// 初始化栈 
void InitStack(SqStack *&s)  // 用指针其实就可以完成分配空间了，加上引用&可以提高程序效率 
{
	s = new SqStack; //分配空间
	s->top = -1; // 栈空标志为-1 
}

// 判断栈是否为空
bool isEmpty(SqStack *s)  // 指针方便箭头访问值 
{
	return (s->top==-1);
} 

//进栈
bool Push(SqStack *&s,ElemType e) // bool返回进栈是否成功 
{
	if(s->top==MaxSize-1) return false; //此时栈满
	s->top++;                           //栈元素+1 
	s->data[s->top]=e;                  //存值 
	return true; 
} 
 
 // 输出出栈序列
 bool Pop(SqStack *&s,ElemType &e)
 {
 	if(s->top==-1) return false;
 	e = s->data[s->top];
 	s->top--;
 	return true;
 } 
 
 // 释放栈
 void DestroyStack(SqStack *&s)
 {
 	free(s);
 } 
 
 // 十进制转二进制
 void Decimal_to_Binary(SqStack *&c,int D)
 {
 	while(D){
 		char v = D%2 + '0';  // 数字int转char字符 
 		Push(c,v);
 		D/=2;
 	}
 }
  
 
int main() {
	SqStack *s;
	ElemType a[] = "abcde"; 
	InitStack(s);     						// 1.初始化栈
	if(isEmpty(s)) cout<<"栈空"<<endl;      // 2.判断栈空 
	else cout<<"非空"<<endl;
	for(int i=0;a[i];i++){                  // 3.入栈 
		if(!Push(s,a[i])){
			cout<<"栈已满，插入"<<a[i]<<"失败"<<endl;
			break;                          // 终止插入 
		}else cout<<"成功插入"<<a[i]<<endl;
	}	
	if(isEmpty(s)) cout<<"栈空"<<endl;      // 4.判断栈空 
	else cout<<"非空"<<endl;
	ElemType e;
	while(Pop(s,e)){                        // 5.出栈 
		cout<<e<<" ";
	}
	DestroyStack(s);                        // 6.释放栈 
	cout<<endl;
	SqStack *c;                             // 7.创建转换进制的栈
	InitStack(c);                           // 8.初始化栈
	int n;cout<<"输入十进制：";cin>>n;
	Decimal_to_Binary(c,n);                 // 9.进制转化 
	cout<<"得到二进制：";
	while(Pop(c,e)){                        // 10.出栈 
		cout<<e;
	}
	DestroyStack(c);						// 11.释放栈 
	
	
}
