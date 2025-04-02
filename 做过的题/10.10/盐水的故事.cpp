#include<iostream>
using namespace std;
int main()
{
    double v,d;  //注意这里一定要用double，如果不用到最后用强制类型转换也会错，可能输入的数据就是double的
    while(cin>>v>>d)
    {
        int ans=0;
        for(int i=1; ;i++)//遍历滴数
        {
            v-=i*d;//先减去滴i滴的体积
            if(v<0)//如果小于0了，则加上并且跳出
            {
                v+=i*d;
                break;
            }
            ans+=i;//滴i滴花了i时间
            if(v==0)//正好滴完就不用停留了，直接break
            {
                break;
            }
            ans++;//停留
        }
        int y=v/d;//还能滴几整滴
        ans+=y;//加上滴y滴的时间
        double x=v/d;//看是否正好滴完，如果不正好滴完，则需再加1
        if(x-y>=0.000001)//只需判断是否整除
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}