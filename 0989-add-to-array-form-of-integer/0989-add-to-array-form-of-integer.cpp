class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int t=0, p=0;
        for(int i=num.size()-1; i>=0||k>0; i--) {
            p=num[i];
            num[i]=(p+k%10+t)%10;
            t=(p+k%10+t)/10;
            k/=10;
            if(i==0&&k>0) { num.insert(num.begin(),0); i++;}
            
        }
        if(t>0) num.insert(num.begin(),t);
        return num;
    }
};