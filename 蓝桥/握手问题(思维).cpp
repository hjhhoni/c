#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=7;i<=49;i++) sum+=i;
    cout<<sum;
    return 0;
}
//对于第一个人来说 除了自己以外要跟其他49人握手 所以第一个是49 //对于第二个人来说 第一个人主动跟我握手了 有一次不算 所以第二个是48.。。 //以此类推 第43个人就是7 到了最后七个人呢 因为互相都没有握手 并且7个人都被前面的人握过手了 所以都是0