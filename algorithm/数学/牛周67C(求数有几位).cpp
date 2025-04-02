#include <iostream>
#include <cmath>
using namespace std;
int n,C,count=0;

int main() {
    
    cin>>n>>C;
    n-=2; //两个符号
    for(int i=0;i<=C;i++){
        int wa,wb;
        if(i==0) wa=1;
        else wa=(int)log10(i)+1;
        
        if((C-i)==0) wb=1;
        else wb=(int)log10(C-i)+1;
        
        if((n-wb-wa-(int)log10(C)-1)==0) count++;
    }
    
    cout<<count;
}
//由于两个非负数 A,B 相加要等与 C ，必然满足 A≤C且B≤C，枚举其实中 A，然后通过减法求 B，看总的数位之和是否相等 n，满足时答案 +1。其中数位计算可以采用 𝑤=⌊𝑙𝑜𝑔10(𝐴)⌋+1，特判A=0，防止产生数学上的错误。
//总结：可以用(int)(log10n)+1来判断n有几位，其中特判a=0时真数为1(任何数字的0次方为1)，别忘了要强制转换为int