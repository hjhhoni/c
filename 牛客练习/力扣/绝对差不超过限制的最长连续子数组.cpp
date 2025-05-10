class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // 使用双端队列维护滑动窗口内的最大值和最小值
        deque<int> queMax, queMin;
        int n = nums.size();
        int left = 0, right = 0;
        int ret = 0;
        // 遍历数组，right指针作为滑动窗口的右边界
        while (right < n) {
            // 移除队列中所有小于当前元素的值，保持queMax的递减顺序
            while (!queMax.empty() && queMax.back() < nums[right]) {
                queMax.pop_back();
            }
            // 移除队列中所有大于当前元素的值，保持queMin的递增顺序
            while (!queMin.empty() && queMin.back() > nums[right]) {
                queMin.pop_back();
            }
            queMax.push_back(nums[right]);
            queMin.push_back(nums[right]);
            // 如果当前窗口的最大值和最小值之差超过限制，移动left指针缩小窗口
            while (!queMax.empty() && !queMin.empty() && queMax.front() - queMin.front() > limit) {  // 若区间不满足条件，则从左边缩小区间
                if (nums[left] == queMin.front()) {  //到达最小值则废弃掉一舍弃区间的最小值，下面最大值同理
                    queMin.pop_front();
                }
                if (nums[left] == queMax.front()) {
                    queMax.pop_front();
                }
                left++;
            }
            // 更新最长子数组的长度
            ret = max(ret, right - left + 1);
            right++;
        }
        // 返回结果
        return ret;
    }
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/solutions/612688/jue-dui-chai-bu-chao-guo-xian-zhi-de-zui-5bki/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。