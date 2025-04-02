class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int wei=nums.size()-k,v=0;
        vector<int>t(nums.size());
        t[v]=nums[wei];v++;
        wei++;
        while(wei!=nums.size()-k){
            if(wei>=nums.size()) wei=0;
            t[v]=nums[wei];
            wei++;v++;
        }
        nums=t;
    }
};
class Solution1 {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};