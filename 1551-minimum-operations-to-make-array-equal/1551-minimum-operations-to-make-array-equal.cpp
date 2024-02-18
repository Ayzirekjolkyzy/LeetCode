class Solution {
public:
    int minOperations(int n) {
        int i=1, j;
        int ret=0;
        while(i<n){
            j=i;
            while(j<n){
                ++j;
                ret++;
            }
            i+=2;
        }
        return ret;
    }
};