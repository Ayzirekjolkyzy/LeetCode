class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ret=0; int temp=nums[0];
        for(int i=1; i<nums.size(); i++) {
            temp+=nums[i];
            if(temp==0) ret++;
        }
        return ret;
    }
};