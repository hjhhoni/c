#include <stdio.h>
// https://blog.csdn.net/weixin_39590058/article/details/108037595?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522EE6E7600-EBF0-46BD-B544-F4C68AEA86F7%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=EE6E7600-EBF0-46BD-B544-F4C68AEA86F7&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-1-108037595-null-null.142^v100^pc_search_result_base9&utm_term=%E6%8A%8A%20%20M%20M%20%E4%B8%AA%E5%90%8C%E6%A0%B7%E7%9A%84%E8%8B%B9%E6%9E%9C%E6%94%BE%E5%9C%A8%20%20N%20N%20%E4%B8%AA%E5%90%8C%E6%A0%B7%E7%9A%84%E7%9B%98%E5%AD%90%E9%87%8C%EF%BC%8C%E5%85%81%E8%AE%B8%E6%9C%89%E7%9A%84%E7%9B%98%E5%AD%90%E7%A9%BA%E7%9D%80%E4%B8%8D%E6%94%BE%EF%BC%8C%E9%97%AE%E5%85%B1%E6%9C%89%E5%A4%9A%E5%B0%91%E7%A7%8D%E4%B8%8D%E5%90%8C%E7%9A%84%E5%88%86%E6%B3%95%EF%BC%9F%20%20%EF%BC%88%E7%94%A8%20%20K%20K%20%E8%A1%A8%E7%A4%BA%EF%BC%89%20%205%20%2C%201%20%2C%201%205%2C1%2C1%E5%92%8C%20%201%20%2C%205%20%2C%201%201%2C5%2C1%20%E6%98%AF%E5%90%8C%E4%B8%80%E7%A7%8D%E5%88%86%E6%B3%95%E3%80%82&spm=1018.2226.3001.4187
long apple(int m, int n) {
	if (n == 1 || m == 0)  return 1;
	else if (m < n) return apple(m, m); //空盘子没有用
	else return apple(m, n-1) + apple(m-n, n); //一个盘子空着与放满所有盘子两种情况
    //递归成逐渐小的问题，连续的一个盘子空着可求出m个苹果放1个盘子里，故盘子最少为1
}

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int M,N;
        scanf("%d %d",&M,&N);
        printf("%lld\n",apple(M,N));
    }
}



