class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]<0) temp2.push_back(nums[i]);
            else temp1.push_back(nums[i]);
        }
        if(temp1.size()==0||temp2.size()==0) return nums;
        vector<int> ret;
        for(int i=0; i<temp1.size(); i++) {
            ret.push_back(temp1[i]); 
            ret.push_back(temp2[i]);
        }
        return ret;
    }
};