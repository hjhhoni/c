#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[305];//被除数
int b[305];//除数
int c[305];//商
bool cmp(int x){//被除数从最高位到第x位，是否大于等于除数
    if(a[x+b[0]]>0) {//如果被除数比除数多一位，返回true
            return true;
    }
    for(int i=b[0];i>=1;i--){//逐位比较
        if (a[x+i-1]<b[i]){//除数大
            return false;
        }else if (a[x+i-1]>b[i]){//被除数大
            return true;
        }
    }
    return true;
}
int main()
{
    cin>>s1>>s2;//当做字符串输入
    a[0]=s1.length();
    for (int i=0;i<s1.length();i++){//被除数字符串转数组
        a[a[0]-i]=s1[i]-'0';
    }
    b[0]=s2.length();
    for (int i=0;i<s2.length();i++){//除数数转数组
        b[b[0]-i]=s2[i]-'0';
    }
    for(int i=a[0]-b[0]+1;i>=1;i--){
        while(cmp(i)){//够减
            c[i]++;//商加1
            for(int j=1;j<=b[0];j++){//逐位相减
                if (a[i+j-1]>=b[j]){//够减
                    a[i+j-1]-=b[j];//直接减
                }else{//不够减
                    a[i+j]--;//借位
                    a[i+j-1]+=10-b[j];//加10再减
                }
            }
        }
    }
    bool flag=1;//假设有前导零
    bool y=0;//假设答案为0
    for (int i=a[0];i>=1;i--){//逆序打印商
        if (flag==0||c[i]>0){//如果不是前导零或者当前位大于0
            cout<<c[i];//输出当前位
            flag=0;//没有前导零了
            y=1;//答案不为0
        }
    }
    if(y==0) cout<<0;//如果是0，输出0
    cout<<endl;
    flag=1;//假设有前导零
    y=0;//假设答案为0
    for (int i=a[0];i>=1;i--){//逆序打印余数
        if (flag==0||a[i]>0){//如果不是前导零或者当前位大于0
            cout<<a[i];//输出当前位
            flag=0;//没有前导零了
            y=1;//答案不为0
        }
    }
    if (y==0) cout<<0;//如果是0，输出0
    return 0;
}