class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end()); 
        vector<int> ret;
        int n=nums1.size(), m=nums2.size(), i=0, j=0, last=-1;
            while(i<n&&j<m) {
                if(nums2[j]==nums1[i]) {
                    if(nums1[i]!=last) { ret.push_back(nums1[i]); last=nums1[i];} i++; j++; }
                    else if(nums1[i]>nums2[j]) j++;
                    else i++;    
            }     
        return ret;
    }
};