// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define ll long long
// #define MAXN 100005
// int visit[MAXN];  // 标记是否访问
// int n;
// ll Max = 0;  // 记录S的最大值
// vector<int> b(MAXN);  // 记录宝石亮度
// // vector<string> s;  // 记录答案
// string s;
// vector<ll> now(4);  // 记录dfs的每个搭配
// ll gcd(ll a, ll b) {
//     if (b) return gcd(b, a % b);
//     else return a;
// }

// ll lcm(ll a, ll b) {
//     return a * b / gcd(a, b);
// }

// void dfs(int depth, int k,int index) {
//     if (depth > 3) {  // 当前组合完成
//         // ll mu = now[1]*now[2]*now[3]*(lcm(lcm(now[1],now[2]),now[3]));
//         // ll zi = lcm(now[1],now[2])*lcm(now[1],now[3])*lcm(now[2],now[3]);
//         ll S = gcd(now[1],gcd(now[2], now[3]))
//         if (S > Max) {
//             s = to_string(now[1]) + " " + to_string(now[2]) + " " + to_string(now[3]);
//             Max = S;
//             // cout<<mu<<" "<<zi<<" "<<s<<endl;
//         }
//         return;
//     }
//     for (int i = index;i <= n;i++) {
//         if (!visit[i]) {
//             visit[i] = 1;  // 标记在now组合中
//             now[k] = b[i];
//             dfs(depth + 1, k + 1,i+1);  // 完成组合
//             visit[i] = 0;  // 回溯
//         }
//     }
//     return;
// }

// int main()
// {
//     cin >> n;

//     for (int i = 1;i <= n;i++) cin >> b[i];
//     sort(b.begin() + 1, b.begin()+n);
//     dfs(1, 1,1);
//     cout << s;
//     return 0;
// }
// 我的方法是基于暴力破解的，但是时间复杂度太高了，导致超时。
// 大佬的方法是化简方程式，得到S = gcd(a,b,c)，然后枚举S，看看能不能找到3个符合最大公约数为S的a,b,c，若可以，直接打印
#include<stdio.h>
const int h=1e5;
int main(){
    int n;
    scanf("%d",&n);
    int mp[h+1]={0};//初始化宝石闪亮度统计表
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        mp[t]++;//统计亮度为t的宝石数量
    }
    //这里我们另辟蹊径，直接枚举精美程度
    for(int i=h;i>=1;i--){//枚举精美程度i
        int ans=0,now=0;//ans表示寻找到了几个宝石，now表示现在数组有几个宝石
        int num[3];//初始化枚举到的宝石
        for(int j=i;j<=h;j+=i){//对于每个精美度i，我们都需要寻找闪亮度为i，2i，3i...的宝石并统计数量
            ans+=mp[j];//把寻找到的宝石数量统计起来
            for(int k=0;k<mp[j]&&now<3;k++){//把统计到的宝石放到数组
                num[now]=j;
                now++;
            }
            if(ans>=3){//如果找到了三个以上的宝石，说明存在三个宝石使其精美度为i
                for(int k=0;k<3;k++){
                    printf("%d ",num[k]);
                }//输出找到的三个宝石
                printf("\n");
                return 0;
            }
        }
    }
}