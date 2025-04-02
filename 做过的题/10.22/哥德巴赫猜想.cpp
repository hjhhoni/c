#include <iostream>
using namespace std;
int judge(long long n){
    for(int i=2;i*i<n;i++){
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main() {
    long long N;
    cin>>N;

    for(long long i=2;i<N;i++){
        if (judge(i)&&judge(N-i))
        {
            printf("%lld = %lld + %lld",N,i,N-i);
            break;
        }
        
    }
    return 0;
}