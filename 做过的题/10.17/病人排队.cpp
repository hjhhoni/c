#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
// 定义一个节点结构体，包含患者的ID，年龄和序列号
struct node{
    char id[20];
    int age;
    int seq;
}a[110],b[110],temp;
 
int main()
{
    int n,d;
    char s[20];
    int p=0,q=0,k=0;
    int i,j;
    // 读取患者数量
    cin>>n;
    for(i=1;i<=n;i++)
    {
        // 输入患者的ID和年龄
        cin>>s>>d;
        k++;
        if(d>=60)
        {
            // 将年龄大于等于60的患者加入到数组a中
            strcpy(a[p].id,s);
            a[p].age=d;
            a[p].seq=k;
            p++;
        }
        else
        {
            // 将年龄小于60的患者加入到数组b中
            strcpy(b[q].id,s);
            b[q].age=d;
            b[q].seq=k;
            q++;
        }
    }
    // 对年龄大于等于60的患者按年龄降序和序列号升序排序
    for(i=0;i<p;i++)
        for(j=i+1;j<p;j++)
            if(a[i].age<a[j].age)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else if(a[i].age==a[j].age&&a[i].seq>a[j].seq)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    // 对年龄小于60的患者按序列号升序排序
    for(i=0;i<q;i++)
        for(j=i+1;j<q;j++)
            if(b[i].seq>b[j].seq)
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
  
    // 输出年龄大于等于60的患者ID
    for(i=0;i<p;i++)
        cout<<a[i].id<<endl;
    // 输出年龄小于60的患者ID
    for(i=0;i<q;i++)
        cout<<b[i].id<<endl;
    return 0;
}