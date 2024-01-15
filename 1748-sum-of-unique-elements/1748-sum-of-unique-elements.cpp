class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0, temp=nums[0]; bool k=true;
        for(int i=1; i<nums.size(); i++) {
            if(k&&temp!=nums[i]) { sum+=temp; temp=nums[i]; k=true; }
           else if(temp==nums[i]) k=false;
            else { temp=nums[i]; k=true; } 
            
        } if(k) sum+=temp;
        return sum;
    }
};