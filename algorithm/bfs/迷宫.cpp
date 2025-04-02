#include<iostream>  //标准输入输出文件
#include<cstring>  //字符库，也有内存操作，如memset初始化数组
#include<queue>  //队列
#include<utility> // 引入 std::pair 的头文件
using namespace std;  //命名空间

// 全局变量声明
int n, ha, la, hb, lb;
char c[110][110];
int mark[110][110];
int fx[4] = {0, 0, -1, 1};
int fy[4] = {-1, 1, 0, 0};
typedef pair<int, int> PII; //队列只支持单个参数，故自己创建一个数据类型

// 广度优先搜索函数，查找从起点到终点的路径
void bfs() {
    
    queue<PII> q;
    if (c[ha][la] == '#' || c[hb][lb] == '#')  //起点和终点不可去
    {
        cout << "NO" << endl;
        return;
    }
    q.push({ha, la});  //A点入列
    c[ha][la] = '#';
    mark[ha][la] = 1;
    while (!q.empty()) //若队列不为空
    {
        PII top = q.front(); //获取队头
        for (int i = 0; i < 4; i++) {
            int ney = top.first + fy[i], nex = top.second + fx[i];
            if (ney >= 0 && nex >= 0 && ney < n && nex < n && c[ney][nex] == '.' && mark[ney][nex] == 0) {
                c[ney][nex] = '#';
                mark[ney][nex] = mark[top.first][top.second] + 1;
                q.push({ney, nex});
            }
        }
        
        q.pop();
    }
    if (mark[hb][lb] != 0) {
        cout << mark[hb][lb] - 1 << endl;
    } else {
        cout << "NO" << endl;
    }
    return;
}

// 主函数，程序入口
int main() {
    int k;
    cin >> k;
    for (int j = 1; j <= k; j++) {
        scanf("%d", &n);
        memset(c, '\0', sizeof c); //初始化数组
        memset(mark, 0, sizeof(mark));
        for (int i = 0; i < n; i++) {
            scanf("%s", c[i]);
        }
        scanf("%d %d %d %d", &ha, &la, &hb, &lb);
        ha -= 1, hb -= 1, la -= 1, lb -= 1;  //题目从1开始算
        bfs();
    }
}