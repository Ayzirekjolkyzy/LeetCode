class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a=0, b=nums.size()-1;
        vector<int> ret(nums.size());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]%2) ret[b--]=nums[i];
            else ret[a++]=nums[i];
        }
        return ret;
    }
};