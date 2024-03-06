class Solution {
public:
   unsigned long long maximumTripletValue(vector<int>& nums) {
        long long ret=0, temp=0;
        for(int i=0; i<nums.size()-2; i++) {
            for(int j=i+1; j<nums.size()-1; j++) {
                for(int k=j+1; k<nums.size(); k++) {
                    temp=(nums[i]-nums[j]);
                    temp*=nums[k];
                    ret=max(ret,temp);
                }
            }
        }
        return ret;
    }
};