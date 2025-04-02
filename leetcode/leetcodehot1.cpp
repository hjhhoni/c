#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size(),m=0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j]==target) {
                    return {i,j};
                    m=1;
                    break;
                }
            }
            if(m==1)break;
        }
        return {};
    }
};