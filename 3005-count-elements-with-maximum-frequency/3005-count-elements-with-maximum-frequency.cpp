class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        int t=nums[0], k=1;
        for(int i=1; i<nums.size(); i++) {
            if(t==nums[i]) k++;
            else { temp.push_back(k); k=1; t=nums[i]; }
        }
        temp.push_back(k);
        sort(temp.begin(), temp.end(), greater<int>());
        t=temp[0]; k=temp[0];
        for(int i=1; i<temp.size(); i++) {
            if(temp[i]==t) k+=t;
        }
        return k;
    }
};