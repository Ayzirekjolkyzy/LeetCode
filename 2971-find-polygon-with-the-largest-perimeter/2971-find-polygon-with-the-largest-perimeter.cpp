class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long sum=-1, prev=0;
        sort(nums.begin(), nums.end());
        for(int j=0; j<nums.size(); j++) {
            if(j>1&&nums[j]<prev){
                sum=nums[j]+prev;
            }
            prev+=nums[j];
        }
 
        return sum;
    }
};