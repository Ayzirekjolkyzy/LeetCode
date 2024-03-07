class Solution {
public:
    bool canConstruct(string ran, string mag) {
        if(mag.size()<ran.size()) return false;
        int n=ran.size();
        for(int i=0; i<ran.size(); i++) {
            for(int j=0; j<mag.size(); j++) {
                if(mag[j]==ran[i]) {
                    mag.erase(mag.begin()+j);
                    n--; 
                    break;
                }
            }
            if(n==0) return true;
        }
        return false;
    }
};
