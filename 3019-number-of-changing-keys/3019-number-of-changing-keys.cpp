class Solution {
public:
    int countKeyChanges(string s) {
        int ret=0;
        for(int i=0; i<s.size()-1; i++) {
            if((abs(s[i]-s[i+1])!=32)&&(s[i]-s[i+1]!=0)) ret++;
        }
        return ret;
    }
};