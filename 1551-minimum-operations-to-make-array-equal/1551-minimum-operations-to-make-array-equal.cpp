class Solution {
public:
    int minOperations(int n) {
        int i=0;
        int ret=0;
        while(i<n/2){
            ret+=n-(2*i+1);
            i++;
        }
        
        return ret;
    }
};