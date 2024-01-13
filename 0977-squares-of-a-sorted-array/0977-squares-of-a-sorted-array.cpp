class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ret(nums.size());
        int a=0, b=nums.size()-1;
        for(int i=nums.size()-1; i>=0; i--) {
            if(abs(nums[a])>abs(nums[b])) { ret[i]=(nums[a]*nums[a]); a++;}
            else { ret[i]=(nums[b]*nums[b]); b--;}
            }
        return ret;
    }
};