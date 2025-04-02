#include <iostream>
using namespace std;
int count=0;
int main() {
    int n,m,k,q;
    cin>>n>>m>>k>>q;
    int ns=0,ms=0,ks=0,lt=0; //lt记录上一次提交时间，ns记录比赛是否结束
    while (q--)
    {
        int time;
        cin>>time;
        time+=1;
        if(time==n) {ns=1;count++;}  //比赛结束
        if(ns==0){
            if(lt!=time) { //前后提交不同时
                ks+=(time-lt);
                lt=time;
                if(ks>k) {
                    count++;
                    ms=0;
                    ks=0;
                }else
                {
                    ms++;
                }
                
            }else
            {
                ms++;
            }
            if(ms>m){
                count++;
                ms=0;
                ks=0; 
            }
        }
    }
    cout<<count;
    return 0;
}