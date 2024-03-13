class Solution {
public:
    int minOperations(vector<string>& logs) {
        int k=0;
        for(int i=0; i<logs.size(); i++) {
            if(logs[i]=="../") {
                k--; 
                if(k<0) k=0;
            }
            else if(logs[i]=="./") continue;
            else k++;
        }
        return k;
    }
};