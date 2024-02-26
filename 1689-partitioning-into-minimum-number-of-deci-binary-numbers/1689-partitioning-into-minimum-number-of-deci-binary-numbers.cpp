class Solution {
public:
    int minPartitions(string n) {
        int ret=0;
        for(auto i: n) {
            ret=max(ret, i-'0');
        }
        return ret;
    }
};