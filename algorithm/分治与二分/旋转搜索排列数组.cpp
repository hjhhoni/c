class Solution {
public:

    int search(vector<int>& nums, int target) {
        int l=-1,r=nums.size()-1;  // 若target的位置是0，l=-1可以到的了mid=0
        int end = nums.back();
        int mid=(l+r)>>1;
        auto check = [&](int i)->bool{
            int x=nums[i];
            if(x>end){  // 旋转了且中心元素在第一段
                return target>end && x>=target; // 这里的条件代表target也在第一段且在区间[l,mid]之间
            }
            return target>end || x>=target; //这里代表mid在第二段，且target也在第二段，即target在区间[mid,r]之间
        };
        while(l+1<r)
        {
            int mid = (l+r)>>1;
            if(check(mid)){
                r=mid;
            }else{
                l=mid;
            }
        }
        return nums[r] == target?r:-1; //二目表达式，真前假后
    }
};

// 效果和下面写成成员函数一样
// class Solution {
// public:
//     // 定义一个普通的函数，用于条件判断
//     bool check(int i, vector<int>& nums, int target, int end) {
//         int x = nums[i];
//         if (x > end) {  // 旋转了且中心元素在第一段
//             return target > end && x >= target; // 这里的条件代表target也在第一段且在区间[l,mid]之间
//         }
//         return target > end || x >= target; // 这里代表mid在第二段，且target也在第二段，即target在区间[mid,r]之间
//     }
//     int search(vector<int>& nums, int target) {
//         int l=-1,r=nums.size()-1;
//         int end = nums.back();
//         int mid=(l+r)>>1;
//         while(l+1<r)
//         {
//             int mid = (l+r)>>1;
//             if(check(mid,nums,target,end)){
//                 r=mid;
//             }else{
//                 l=mid;
//             }
//         }
//         return nums[r] == target?r:-1;
//     }
// };


// 作者：灵茶山艾府
// 链接：https://leetcode.cn/problems/search-in-rotated-sorted-array/solutions/1987503/by-endlesscheng-auuh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。