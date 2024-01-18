class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        bool k=true; int ans=0;
        for(int i=0; i<arr1.size(); i++) {
            k=true;
            for(int j=0; j<arr2.size(); j++) {
                if(abs(arr1[i]-arr2[j])<=d) { k=false; break;} 
            }
            if(k) ans++;
            }
        return ans;
    }
};