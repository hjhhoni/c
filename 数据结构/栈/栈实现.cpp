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

// ��ʼ��ջ 
void InitStack(SqStack *&s)  // ��ָ����ʵ�Ϳ�����ɷ���ռ��ˣ���������&������߳���Ч�� 
{
	s = new SqStack; //����ռ�
	s->top = -1; // ջ�ձ�־Ϊ-1 
}

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(SqStack *s)  // ָ�뷽���ͷ����ֵ 
{
	return (s->top==-1);
} 

//��ջ
bool Push(SqStack *&s,ElemType e) // bool���ؽ�ջ�Ƿ�ɹ� 
{
	if(s->top==MaxSize-1) return false; //��ʱջ��
	s->top++;                           //ջԪ��+1 
	s->data[s->top]=e;                  //��ֵ 
	return true; 
} 
 
 // �����ջ����
 bool Pop(SqStack *&s,ElemType &e)
 {
 	if(s->top==-1) return false;
 	e = s->data[s->top];
 	s->top--;
 	return true;
 } 
 
 // �ͷ�ջ
 void DestroyStack(SqStack *&s)
 {
 	free(s);
 } 
 
 // ʮ����ת������
 void Decimal_to_Binary(SqStack *&c,int D)
 {
 	while(D){
 		char v = D%2 + '0';  // ����intתchar�ַ� 
 		Push(c,v);
 		D/=2;
 	}
 }
  
 
int main() {
	SqStack *s;
	ElemType a[] = "abcde"; 
	InitStack(s);     						// 1.��ʼ��ջ
	if(isEmpty(s)) cout<<"ջ��"<<endl;      // 2.�ж�ջ�� 
	else cout<<"�ǿ�"<<endl;
	for(int i=0;a[i];i++){                  // 3.��ջ 
		if(!Push(s,a[i])){
			cout<<"ջ����������"<<a[i]<<"ʧ��"<<endl;
			break;                          // ��ֹ���� 
		}else cout<<"�ɹ�����"<<a[i]<<endl;
	}	
	if(isEmpty(s)) cout<<"ջ��"<<endl;      // 4.�ж�ջ�� 
	else cout<<"�ǿ�"<<endl;
	ElemType e;
	while(Pop(s,e)){                        // 5.��ջ 
		cout<<e<<" ";
	}
	DestroyStack(s);                        // 6.�ͷ�ջ 
	cout<<endl;
	SqStack *c;                             // 7.����ת�����Ƶ�ջ
	InitStack(c);                           // 8.��ʼ��ջ
	int n;cout<<"����ʮ���ƣ�";cin>>n;
	Decimal_to_Binary(c,n);                 // 9.����ת�� 
	cout<<"�õ������ƣ�";
	while(Pop(c,e)){                        // 10.��ջ 
		cout<<e;
	}
	DestroyStack(c);						// 11.�ͷ�ջ 
	
	
}
