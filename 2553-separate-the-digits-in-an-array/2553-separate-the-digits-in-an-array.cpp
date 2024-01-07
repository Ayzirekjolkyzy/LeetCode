class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int i=0, j=0, temp;
        for(i=0; i<nums.size(); i++) {
            j=0;
            while(nums[i]>=10) { temp=nums[i]%10;
                nums.insert(nums.begin()+i+1, temp);
                nums[i]/=10;
                j++;
            } i+=j;
        }
        return nums;
    }
};