// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         int biao[26] = {0};  // s1中存在的字母的表
//         bool ans = false;
//         if(s1.size()>s2.size()) return ans;
//         for(int i=0;i<s1.size();i++) biao[s1[i]-'a']++; // 存表
//         for(int i=0;i<=s2.size()-s1.size()&&ans==false;i++){
//             if(biao[s2[i]-'a']){  // 遍历每个s1长度的子串
//                 int biaoo[26] = {0},fea = 0;  // fea用于检测s1排列在s2中是否连续
//                 for(int j=i;j<i+s1.size();j++) {
//                     if(!biao[s2[j]-'a']) break;
//                     else{
//                         biaoo[s2[j]-'a'] ++;
//                         fea++;
//                     }
//                 }
//                 if(fea==s1.size()){
//                     for(int j=0;j<26;j++){
//                         if(biao[j]!=biaoo[j]){
//                             ans = false;
//                             break;
//                         }
//                         ans = true;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };

//https://leetcode.cn/problems/permutation-in-string/

// 上面的是我的小丑写法，没有用到双指针的窗口滑动

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        if (n > m) {
            return false;
        }
        vector<int> cnt1(26), cnt2(26);
        for (int i = 0; i < n; ++i) {
            ++cnt1[s1[i] - 'a'];
            ++cnt2[s2[i] - 'a'];
        }
        if (cnt1 == cnt2) {
            return true;
        }
        for (int i = n; i < m; ++i) {  // 窗口滑动
            ++cnt2[s2[i] - 'a'];
            --cnt2[s2[i - n] - 'a'];  // 标志位
            if (cnt1 == cnt2) {
                return true;
            }
        }
        return false;
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/permutation-in-string/solutions/599202/zi-fu-chuan-de-pai-lie-by-leetcode-solut-7k7u/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。