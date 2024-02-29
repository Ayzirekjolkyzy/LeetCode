class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ret=0, count1=0, count2=0;
        for(int i=0; i<bank.size(); i++) {
            for(int j=0; j<bank[i].size(); j++) {
                if(bank[i][j]=='1') count1++;
            }
            if(count2!=0)  ret+=(count1*count2);
           if(count1!=0) count2=count1; count1=0;
        }
        return ret;
        
    }
};