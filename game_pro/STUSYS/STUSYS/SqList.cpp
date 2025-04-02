#include <iostream>
using namespace std;
#define MAXSIZE 100 // �����������

typedef char ElemType; // ������������

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

// ��ʼ��һ���յ�˳�������ռ�
void InitList(SqList *&L)
{
    L = new SqList;
    fill_n(L->data, MAXSIZE, '\0'); // �ÿգ����㷵�ش���
    L->length = 0;
}
// β�巨����Ԫ��
void Insert(SqList *L, ElemType e)
{
    if (L->length >= MAXSIZE) // ˳�������
        cout << "˳���������" << endl;
    else
    {
        L->data[L->length] = e;
        L->length++;
    }
}
// ���˳���
void Display(SqList *L)
{
    for (int i = 0; i < L->length; i++)
        cout << L->data[i] << " ";
    cout << endl;
}
// ���˳�����
void GetLength(SqList *L)
{
    cout << "˳�����Ϊ��" << L->length-1 << endl;
}
// �ж�˳����Ƿ�Ϊ��
bool IsEmpty(SqList *L)
{
    return L->length == 0;
}
// ��λ�ò���Ԫ��
char Locate(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length) return 0;
    else {
        if(L->data[pos-1]) return L->data[pos-1];
        else return 0;
    }
}
// ��ֵ����Ԫ��
int SearchbyValue(SqList *L, ElemType e)
{
    for (int i = 0; i < L->length; i++)
        if (L->data[i] == e) return i+1;
    return 0;
}
// ��ָ��λ��ǰ����Ԫ�أ�λ�ô�1��ʼ���ʴ�λ��i֮ǰ������Է��Ͽձ�Ĳ����߼���
void InsertBefore(SqList *L, int pos, ElemType e)
{
    if (pos < 1 || pos > L->length+1) // λ�ò��Ϸ�
        cout << "λ�ò��Ϸ���" << endl;
    else if (L->length >= MAXSIZE) // ˳�������
        cout << "˳���������" << endl;
    else
    {
        for (int i = L->length; i >= pos-1; i--)
            L->data[i+1] = L->data[i]; // ����Ԫ��
        L->data[pos-1] = e;
        L->length++;
    }
}
// ɾ��ָ��λ��Ԫ��
void Delete(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length) // λ�ò��Ϸ�
        cout << "λ�ò��Ϸ���" << endl;
    else
    {
        for (int i = pos-1; i < L->length-1; i++)
            L->data[i] = L->data[i+1]; // ǰ��Ԫ��
        L->data[L->length-1] = '\0'; // �ÿ����һ��Ԫ��
        L->length--;
    }
}
// ����˳���
void DestroyList(SqList*& L)
{
    delete L;
    L = NULL;
    cout << "˳��������٣�" << endl;
}
int main()
{
    char a[] = "abcde";
    SqList *L = new SqList;
    InitList(L); // ��ʼ��һ���յ�˳���
    for(auto i:a) Insert(L,i); // ���β���
    Display(L); // ���
    GetLength(L); // �������
    if(IsEmpty(L)) cout << "˳���Ϊ�գ�" << endl; // �ж��Ƿ�Ϊ��
    else cout << "˳���Ϊ�գ�" << endl;
    int i6, i8,i10;char e7, e8;
    cout<<"��Ҫ����ڼ���Ԫ�أ�"<<endl;
    cin>>i6;
    if(Locate(L,i6)) cout<<"��"<<i6<<"��Ԫ��Ϊ��"<<Locate(L,i6)<<endl; // ��λ�ò���Ԫ��
    else cout<<"�����ڸ�Ԫ�أ�"<<endl;
    cout<<"������Ҫ���ҵ�Ԫ�أ�"<<endl;
    cin>>e7;
    if(SearchbyValue(L,e7)) cout<<"Ԫ��"<<e7<<"�ڵ�"<<SearchbyValue(L,e7)<< "��λ�ã�"<<endl; // ��ֵ����Ԫ��
    else cout<<"�����ڸ�Ԫ�أ�"<<endl;
    cout<<"������Ҫ�����Ԫ�ص�λ�ü���ֵ���ո�ֿ�����"<<endl;
    cin>>i8>>e8;
    InsertBefore(L,i8,e8); // ��ָ��λ��ǰ����Ԫ��
    Display(L); // ���
    cout<<"������Ҫɾ����λ�ã�"<<endl;
    cin>>i10;
    Delete(L,i10); // ɾ��ָ��λ��Ԫ��
    Display(L); // ���
    DestroyList(L); // ����˳���
}