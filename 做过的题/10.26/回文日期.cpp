#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,k=2;
    cin>>a;
    a++;
    while (k)
    {
        switch ((a/100)%100)
        {
        case 1:if((a%100)==32){a+=69;}break;
        case 2:
            if((a/10000)%400==0||((a/10000)%4==0&&(a/10000)%100!=0)){
                if((a%100)==30){a+=71;}
            }else{
                if((a%100)==29){a+=72;}
            }
            break;
        case 3:if((a%100)==32){a+=69;}break;
        case 4:if((a%100)==31){a+=70;}break;
        case 5:if((a%100)==32){a+=69;}break;
        case 6:if((a%100)==31){a+=70;}break;
        case 7:if((a%100)==32){a+=69;}break;
        case 8:if((a%100)==32){a+=69;}break;
        case 9:if((a%100)==31){a+=70;}break;
        case 10:if((a%100)==32){a+=69;}break;
        case 11:if((a%100)==31){a+=70;}break;
        case 12:if((a%100)==32){a+=69;}break;
        }
        if ((a/100)%100==13)
        {
            a+=10000;
            a/=10000;
            a*=10000;
            a+=101;
        }
        
        string as=to_string(a);
        if (as==string(as.rbegin(),as.rend())&&k==2)
        {
            cout<<a<<endl;
            k--;
        }
        if (as[0]==as[2]&&as[2]==as[5]&&as[5]==as[7]&&as[1]==as[3]&&as[3]==as[4]&&as[4]==as[6])
        {
            cout<<a;
            k--;
        }
        a++;
    }
    
    return 0;
}