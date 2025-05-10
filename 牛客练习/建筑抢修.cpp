#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 150000+7;
pair<int, int> a[N];
priority_queue<int> pq;  // 优先队列自动排序从大到小

void solve(){
    int n;cin>>n;
    for (int i = 0; i < n; ++i)
        cin>>a[i].second>>a[i].first; // a.second表示用时，a.first表示时间内完成任务
    sort(a, a + n);  //按a.first从小到大排序，贪心截止时间最少的
    ll ans = 0, now = 0;  // now表示用时多少
    for (int i = 0; i < n; ++i) {
        // 遍历的任务规律是截至时间更长
        if (now + a[i].second <= a[i].first) {
            ++ans;
            now += a[i].second;
            pq.push(a[i].second);  // 将用时存入优先队列
        }
        else if (pq.top() > a[i].second) {  // 若用时超时，则用替换成截止时间更长，需要用时更短的任务（对应条件），但是处理的任务数没有变
            now -= pq.top();  
            now += a[i].second;
            pq.pop(); pq.push(a[i].second);
        }
    }
    cout<<ans;
}   

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}

/*  python版本
import heapq

def solve():
    n = int(input())
    tasks = []
    for _ in range(n):
        t, d = map(int, input().split())  # t 表示用时，d 表示时间内完成任务
        tasks.append((d, t))  # 存储为 (d, t)，方便后续排序

    tasks.sort()  # 按 d 从小到大排序，贪心截止时间最少的
    ans = 0
    now = 0  # 当前累计用时
    pq = []  # 优先队列（最小堆）

    for d, t in tasks:
        if now + t <= d:
            ans += 1
            now += t
            heapq.heappush(pq, -t)  # Python 的 heapq 是最小堆，用负数模拟最大堆
        elif pq and -pq[0] > t:  # 若用时超时，则替换成截止时间更长、需要用时更短的任务
            now += t + heapq.heappop(pq)  # 替换掉最大用时的任务
            heapq.heappush(pq, -t)

    print(ans)

if __name__ == "__main__":
    t = 1  # 如果需要多组测试用例，可以用 t = int(input())
    for _ in range(t):
        solve()
*/