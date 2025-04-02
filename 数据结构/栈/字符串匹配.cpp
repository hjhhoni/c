#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[260]={'\0'};
    char stack[260]={'\0'};
    int n,tail=0;
    cin>>n;
    while (n--)
    {
        memset(a,'\0',sizeof(a));
        memset(stack,'\0',sizeof(stack));
        cin>>a;
        int len=(int)strlen(a);
        for(int i=0;i<len;i++){
            switch (a[i])
            {
                case '{':stack[tail]=a[i];tail++;break;
                case '[':stack[tail]=a[i];tail++;break;
                case '(':stack[tail]=a[i];tail++;break;
                case '<':stack[tail]=a[i];tail++;break;
                case '}':
                    if(stack[tail-1]!='{'){
                        cout<<"NO"<<endl;
                        tail=-1;
                        break;
                    }
                    tail--;
                    break;
                
                case ']':
                    if(stack[tail-1]!='['){
                        cout<<"NO"<<endl;
                        tail=-1;
                        break;
                    }
                    tail--;
                    break;
                case ')':
                    if(stack[tail-1]!='('){
                        cout<<"NO"<<endl;
                        tail=-1;
                        break;
                    }
                    tail--;
                    break;
                case '>':
                    if(stack[tail-1]!='<'){
                        cout<<"NO"<<endl;
                        tail=-1;
                        break;
                    }
                    tail--;
                    break;                    
            }
               
            if(tail==-1){
                break;
            }
        }
        if(tail==0)cout<<"YES"<<endl;
        else if(tail!=0&&tail!=-1) cout<<"NO"<<endl;
    }
    
    return 0;
}