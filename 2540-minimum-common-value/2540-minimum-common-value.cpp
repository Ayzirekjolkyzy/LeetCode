class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums1[nums1.size()-1]<nums2[0]) return -1;
        for(int i=0; i<nums1.size(); i++) {
            for(int j=0; j<nums2.size(); j++) {
                if(nums1[i]==nums2[j]) return nums1[i];
            }
        }
        return -1;
    }
};