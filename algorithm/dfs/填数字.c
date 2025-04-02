#include <stdio.h>
#include <string.h>

char c[7];
int len,count;

void dfs(char c[],int depth, int sum) {
  if(depth==len){
    if(sum<=10&&sum>=0) count++;
    return;
  }

  for(int i=0;i<=10;i++){
    if(depth==0) dfs(c,depth+1, i);
    else
      if(i==0&&c[depth-1]=='/') continue;
      else{
        if(c[depth-1]=='/') dfs(c,depth+1, sum/i);
        else if(c[depth-1]=='*') dfs(c,depth+1, sum*i);
        else if(c[depth-1]=='+') dfs(c,depth+1, sum+i);
        else if(c[depth-1]=='-') dfs(c,depth+1, sum-i);
        // else if(c[depth-1]=='=') dfs(c,depth+1, sum, count);
      }

  }
  return;
}

int main() {
    while (scanf("%s", c) != EOF) {
        len = strlen(c);
        count = 0;
        dfs(c,0, 0); // 调用 DFS,depth从0开始
        printf("%d\n", count); // 输出计数
    }
    return 0;
}
