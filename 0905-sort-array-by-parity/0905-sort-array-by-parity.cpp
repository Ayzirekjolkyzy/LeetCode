class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int temp;
        for(int i=0, j=nums.size()-1; i<nums.size(), j>i;) {
            if(nums[i]%2&&nums[j]%2==0) { temp=nums[i]; nums[i]=nums[j]; nums[j]=temp; i++; j--;}
            else if(nums[i]%2) { j--; }
            else i++;
        }
        return nums;
    }
};