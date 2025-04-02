#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int hao,shu,a[10001]={0};  //a数组用来记录对应价格的宝石个数
    while (n--)
    {
        cin>>hao>>shu;
        switch (hao)
        {
        case 1:a[9]+=shu;break;
        case 2:a[7]+=shu;break;
        case 3:a[8]+=shu;break;
        case 4:a[5]+=shu;break;
        case 5:a[6]+=shu;break;
        case 6:a[3]+=shu;break;
        case 7:a[4]+=shu;break;
        case 8:a[2]+=shu;break;
        }
    }
    int v=10;
    for(int i=2;i<=9;i++){  //用v来往后拓展数组，保证超过64个的宝石品种参与价值评比
        while (a[i]>64)  //保证物品栏不爆掉
        {
            a[v]=64*i;
            v++;
            a[i]-=64;
        }
    }
    for(int i=2;i<=9;i++){
        a[i]=a[i]*i;     //计算每种价格宝石价值
    }
    sort(a+2,a+10+v-10);   //价值排序，all in
    long long sum=0;

    while (v--)
    {   
        if (a[v]!=0)
        {
            sum+=a[v];
            m--;
            if (m==0)
            {
                break;
            }
            
        }
        
    }
    
    cout<<sum;
    return 0;
}