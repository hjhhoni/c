class Solution {
public:
    bool operator()(string a,string b){
        return a+b<b+a;
    }
    string crackPassword(vector<int>& password) {
        vector<string> strs;  //便于储存非连续的字符数组
        string ans;
        for(int i=0;i<password.size();i++){
            strs.push_back(to_string(password[i]));
        }
        sort(strs.begin(),strs.end(),Solution());
        for(int i=0;i<strs.size();i++){
            ans+=strs[i];
        }
        return ans;
    }
};