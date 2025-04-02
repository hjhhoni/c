#include <iostream>
using namespace std;
#include <math.h>


typedef struct Complex {
	double real;
	double imag;
} Complex;

// 初始化（分配空间）
void Init(Complex *&c)
{
    c = new Complex;
}
// 赋值
void Assign(Complex *&c, double real, double imag)
{
    c->real = real;
    c->imag = imag;
}
// 输出
void Output(Complex *c)
{
    if(c->real){   // 实部不为0
        cout<<c->real;  // 输出实部
        if(c->imag) // 虚部不为0
        {
            if(c->imag>0) cout<<"+";  // 虚部为正数
            if(c->imag==1) cout<<"i";  // 虚部为1
            else if(c->imag==-1) cout<<"-i";  // 虚部为-1
            else cout<<c->imag<<"i";  // 其他情况
        }
    }else{
        if(c->imag)
        {
            if(c->imag!=1 && c->imag!=-1) cout<<c->imag<<"i";  // 虚部为正数
            if(c->imag==1) cout<<"i";  // 虚部为1
            else if(c->imag==-1) cout<<"-i";  // 虚部为-1
        }
        else cout<<"0";  // 实部虚部都为0
    }

}
// 复数加法
void Add(Complex *c1, Complex *c2, Complex *&c)
{
    c->real = c1->real + c2->real;
    c->imag = c1->imag + c2->imag;
}
// 复数减法
void Sub(Complex *c1, Complex *c2, Complex *&c)
{
    c->real = c1->real - c2->real;
    c->imag = c1->imag - c2->imag;
}
// 复数乘法
void Mul(Complex *c1, Complex *c2, Complex *&c)
{
    c->real = c1->real * c2->real - c1->imag * c2->imag;
    c->imag = c1->real * c2->imag + c1->imag * c2->real;
}
// 复数除法
void Div(Complex *c1, Complex *c2)
{
    Complex *temp;
    Init(temp);  // 初始化（分配空间）
    temp->real = c2->real;
    temp->imag = -c2->imag;  // 虚部取负
    Complex *c3; //分子
    Init(c3);  // 初始化（分配空间）
    Mul(c1, temp, c3);  // 乘法
    Complex *c4; //分母
    Init(c4);  // 初始化（分配空间）
    Mul(c2, temp, c4);  // 乘法
    cout<<"复数1/复数2为：(";Output(c3);cout<<")/";Output(c4);cout<<endl;    // 输出
}
// 复数模
double Mod(Complex *c)
{
    return sqrt(c->real * c->real + c->imag * c->imag);
}
// 销毁（释放空间）
void Destroy(Complex *&c)
{
    delete c;
    c = NULL;
}
int main()
{
    Complex *c1, *c2;
    int c1real, c1imag, c2real, c2imag;
    Init(c1);Init(c2);                  // 初始化（分配空间）
    cout<<"请输入复数1的实部和虚部：";
    cin>>c1real>>c1imag;
    cout<<"请输入复数2的实部和虚部：";
    cin>>c2real>>c2imag;
    Assign(c1, c1real, c1imag);         // 赋值
    Assign(c2, c2real, c2imag);         // 赋值
    cout<<"复数1为：";Output(c1);cout<<endl;    // 输出
    cout<<"复数2为：";Output(c2);cout<<endl;    // 输出
    Complex *c;
    Init(c);                            // 初始化（分配空间）
    Add(c1, c2, c);                    // 复数加法
    cout<<"复数1+复数2为：";Output(c);cout<<endl;    // 输出
    Sub(c1, c2, c);                    // 复数减法
    cout<<"复数1-复数2为：";Output(c);cout<<endl;    // 输出
    Mul(c1, c2, c);                    // 复数乘法
    cout<<"复数1*复数2为：";Output(c);cout<<endl;    // 输出
    Div(c1, c2);                    // 复数除法

    cout<<"复数1的模为："<<Mod(c1)<<endl;    // 输出
    cout<<"复数2的模为："<<Mod(c2)<<endl;    // 输出
    Destroy(c1);Destroy(c2);             // 销毁（释放空间）

	return 0;
}
