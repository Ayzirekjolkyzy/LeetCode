class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]==0) { count++; nums.erase(nums.begin()+i); i--;} 
            else if(nums[i]==nums[i+1]) { nums[i]*=2; nums.erase(nums.begin()+i+1); count++; }
        }
        while(count>0) {
            nums.push_back(0);
            count--;
        }
        return nums;
    }
};