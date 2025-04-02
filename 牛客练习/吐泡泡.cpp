#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        stack<char> st;
        string str;
        st.push(s[0]);
        for(int i = 1; i < s.length(); i++){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
                continue;
            }
            if(!st.empty()&&st.top()==s[i]&&s[i]=='o'){
                st.pop();
                if(!st.empty()&&st.top()=='O') st.pop();
                else st.push('O');
            }
            else if(!st.empty()&&st.top()==s[i]&&s[i]=='O'){
                st.pop();
            }
        }
        while(!st.empty())//将栈里剩余的弹出至str中
        {
            str+=st.top();
            st.pop();
        }
        for(int i=(int)str.length()-1;i>=0;i--)//逆序输出str
            cout<<str[i];
        cout<<endl;
    }   
}