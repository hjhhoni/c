class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        const int BIAS = 50;  // 设置偏移量，题目元素范围是-50~50，转换成下标加上偏移量即可
        int cnt[BIAS*2+1]{};
        for(int i=0;i<k-1;i++){  // 故意先进入k-1个窗口
            cnt[nums[i]+BIAS]++;  // 类似于桶排序记录个数，即可在一定桶区间找到第几大/小的值
        }
        int n = nums.size();
        vector<int> ans(n-k+1); // 有n-k+1个长度为k的窗口
        for(int i=k-1;i<n;i++){
            cnt[nums[i]+BIAS]++;  // 进入最右端一个窗口，使得窗口满足长度k
            int shu = x;
            for(int j=0;j<BIAS;j++){  // 遍历下标为0~49对应负数为-50~-1，递增穷举负数
                shu-=cnt[j];  // 从窗口最小的负数开始穷举，在减去某个负数的计数后shu小于等于0时，即找到第x小负数
                if(shu<=0){ // 某长度的窗口从未进入这个if语句即该窗口的美丽数为0
                    ans[i-k+1] = j-BIAS;  // 还原成偏移前的负数
                    break;  //找到了该窗口的第x小的数，结束穷举
                }
            }
            cnt[nums[i-k+1]+BIAS]--;  // 退出最左端的窗口
        }
        return ans;
    }
};

//https://leetcode.cn/problems/sliding-subarray-beauty/