class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int a=0, b=0;
        for(int i=0; i<nums1.size(); i++) 
        { for(int j=0; j<nums2.size(); j++) {
            if(nums1[i]==nums2[j]) {a++; break;}
        }}
        for(int i=0; i<nums2.size(); i++) {
            for(int j=0; j<nums1.size(); j++){
                if(nums2[i]==nums1[j]) { b++; break; }
            }
        } return {a,b};
        
    }
};
