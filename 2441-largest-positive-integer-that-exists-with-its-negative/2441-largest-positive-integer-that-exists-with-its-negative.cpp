class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]>0||nums[nums.size()-1]<0) return -1;
        int j=0;
        for(int i=nums.size()-1; i>=0; i--) {
            if(nums[i]<0) return -1;
            if(nums[i]>0) {
                j=0;
                while(j<i) {
                    if(nums[j]>0) break;
                    if(nums[j]==nums[i]*(-1)) return nums[i];
                    j++;
                }
            }
        }
        return -1;
    }
};