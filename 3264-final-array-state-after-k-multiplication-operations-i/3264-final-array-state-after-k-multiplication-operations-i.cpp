class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        
        for(int i=0; i<k; i++) {
            int x=0;
            for(int j=0; j<nums.size(); j++) {
                if(nums[x]>nums[j]) x=j;
            }
            nums[x]=nums[x]*mul;
        }
        return nums;
    }
};