#include <iostream>
#include<utility> // 引入 std::pair 的头文件
using namespace std;


typedef pair<float, float> PII; //创建数据类型
int main() {
    PII a,b,ja,ji;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;
    ja.first=a.first+b.first;ja.second=a.second+b.second;
    ji.first=a.first-b.first;ji.second=a.second-b.second;
    if (ja.first!=0){
        printf("%.1f",ja.first);
        if(ja.second>0) printf("+%.1fi\n",ja.second);
        else if(ja.second<0) printf("%.1fi\n",ja.second);
        else printf("\n");        
    }else{
        if(ja.second>0) printf("%.1fi\n",ja.second);
        else if(ja.second<0) printf("%.1fi\n",ja.second);
        else printf("0.0\n"); 
    }
    
    if (ji.first!=0){
        printf("%.1f",ji.first);
        if(ji.second>0) printf("+%.1fi\n",ji.second);
        else if(ji.second<0) printf("%.1fi\n",ji.second);
        else printf("\n");        
    }else
    {
        if(ji.second>0) printf("%.1fi\n",ji.second);
        else if(ji.second<0) printf("%.1fi\n",ji.second);
        else printf("0.0\n");
    }

    return 0;
}