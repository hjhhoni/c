#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n%3==0&&n%5!=0)
    {
        cout<<"Fizz";
    }else if (n%3!=0&&n%5==0)
    {
        cout<<"Buzz";
    }else if (n%3==0&&n%5==0)
    {
        cout<<"FizzBuzz";
    }else
    {
        cout<<n;
    }
    
    
    
    
    return 0;
}