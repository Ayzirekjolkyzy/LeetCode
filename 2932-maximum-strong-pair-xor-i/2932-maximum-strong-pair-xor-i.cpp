class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int ret=0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(abs(nums[i]-nums[j])<=min(nums[i], nums[j])) 
                { if(ret<(nums[i]^nums[j])) ret=nums[i]^nums[j];
                }
            }
        }
        return ret;
    }
};