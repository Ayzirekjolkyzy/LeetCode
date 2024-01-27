class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s="";
        while(n>0) {
            if(n%2) s+='1';
            else s+='0';
            n/=2;
        }
        vector<int> ret(2,0);
        for(int i=0; i<s.size(); i++) {
            if(i%2==0&&s[i]=='1') ret[0]++;
            if(i%2&&s[i]=='1') ret[1]++;
        }
        return ret;
    }
};