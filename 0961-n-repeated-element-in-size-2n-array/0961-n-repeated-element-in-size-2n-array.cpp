class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j=1;
            while(j<nums.size()) {
                if(nums[j]==nums[j-1])
                    return nums[j];
                j++;
            } return 0;
    }
};