#include <iostream>
using namespace std;
char a[100010],b[100010],c[100010],d[100010];
void quick(int l,int r,char arr[]){
    int k=r;
    if(r==l||r<0||l>k) return;

    int pivot=arr[l]; //枢轴
    int m=1; //m为1时从右往左边扫
    for(;;){
        if(l==r) break;
        if (m==1)
        {
            if (arr[r]<=pivot)
            {
                arr[l]=arr[r];
                m=0;
                continue;
            }
            r--;
        }else{
            if (arr[l]>pivot)
            {
                arr[r]=arr[l];
                m=1;
                continue;
            }
            l++;
        }
    }
    // 此时l==r;
    arr[r]=pivot;
    quick(0,r-1,arr); //左边
    quick(r+1,k,arr); //右边
    return;
}
int main() {
    int n,k=0,v=0,w=0;
    
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++){
        if (a[i]>='a'&&a[i]<='z')
        {
            b[k]=a[i];k++;
        }else if (a[i]>='A'&&a[i]<='Z')
        {
            c[v]=a[i];v++;
        }else if (a[i]>='0'&&a[i]<='9')
        {
            d[w]=a[i];w++;
        }
    }
    quick(0,k-1,b);
    quick(0,v-1,c);
    for(int i=0;i<k;i++) cout<<b[i];
    for(int i=0;i<w;i++) cout<<d[i];
    for(int i=0;i<v;i++) cout<<c[i];
    return 0;
}