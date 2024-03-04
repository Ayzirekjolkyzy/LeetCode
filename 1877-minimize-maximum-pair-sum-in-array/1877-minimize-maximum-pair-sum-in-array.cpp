class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ret=-1;
        sort(nums.begin(), nums.end());
        for(int i=0, j=nums.size()-1; i<j; i++, j--) {
            if(nums[i]+nums[j]>ret) ret=nums[i]+nums[j];
        }
        return ret;
    }
};