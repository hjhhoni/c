#include <iostream>
using namespace std;
void try1(int arr[]){ //传入二维数组要int arr[][n],给定n
    int temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
}
void try2(int *arr){
    int temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
}
void try3(int *&arr){
    int temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
}
int main() {
    int a[4]={1,2,3,4};
    int b[4]={1,2,3,4};
    int c[4]={1,2,3,4};
    int d[4]={1,2,3,4};
    try1(a); //直接传入数组
    try2(b); //传入指针
    for(int i=0;i<4;i++) cout<<a[i];
    cout<<endl;
    for(int i=0;i<4;i++) cout<<b[i];
    cout<<endl;

    return 0;
}