class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans=0;
       for(auto it: hours) {
           if(it>=target) ans++;
       }
        return ans; }
};