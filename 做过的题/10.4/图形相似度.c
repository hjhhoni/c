#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int x,y;
    cin>>x>>y;             //放在此处对
    int m[x][y];
    int n[x][y];
    double same=0;
    //输入第一个矩阵
       //cin>>x>>y;        放在此处错
        for(int i=0;i<x;i++)    //行
        {
            for(int j=0;j<y;j++)    //列
            {
                cin>>m[i][j];
            }
        }
    //输入第二个矩阵
        for(int i=0;i<x;i++)    //行
        {
            for(int j=0;j<y;j++)    //列
            {
                cin>>n[i][j];
            }
        }
    
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
            if(m[i][j]==n[i][j])
                same++;
    }
    cout<<fixed<<setprecision(2)<<(double)((same*100)/(x*y))<<endl;
}
