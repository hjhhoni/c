#include <stdio.h>
#include <malloc.h>

#define MaxSize 50
typedef int ElemType;

typedef struct 
{
    ElemType data[MaxSize];
    int length;
} SqList;

void CreateList(SqList *&L, ElemType a[], int n)
{
    L = (SqList *)malloc(sizeof(SqList));
    for (int i = 0; i < n; i++)
        L->data[i] = a[i];
    L->length = n;
}

void DispList(SqList *L)
{
    for (int i = 0; i < L->length; i++)
        printf("%d ", L->data[i]);
    printf("\n");
}

bool ListDelete(SqList *&L, int i, ElemType &e)
{
    if (i < 1 || i > L->length) return false; // 检查删除位置是否合法
    e = L->data[i - 1];  // 获取被删除的元素
    for (int j = i; j < L->length; j++)  // 将删除位置及其后的所有元素向前移动一位
    {
        L->data[j - 1] = L->data[j];
    }
    L->length--;  // 更新顺序表的长度
    return true;
}

int main()
{
    int n, a[51] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    SqList *L;
    CreateList(L, a, n);
    int p;
    scanf("%d", &p);
    int d;
    if (ListDelete(L, p, d)) {
        DispList(L);
    } else {
    }
    free(L);  // 释放分配的内存
    return 0;
}