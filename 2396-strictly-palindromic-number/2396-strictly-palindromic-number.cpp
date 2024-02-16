class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int temp=n;
        string ret="";
        for(int i=2; i<=n-2; i++) {
            while(temp>0) {
                ret+=to_string(temp%i);
                temp/=i;
            }
            int a=0, b=ret.size()-1;
            while(a<=b){
                if(ret[a]!=ret[b]) return false;
                a++; b--;
            }
            temp=n; ret="";
        }
        
        return true;
    }
};