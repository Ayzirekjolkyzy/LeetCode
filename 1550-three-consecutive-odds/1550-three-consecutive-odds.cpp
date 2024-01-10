class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      bool k=false; int t=0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]%2) t++;
            else t=0;
            if(t==3) { k=true; break;}
        }
        return k;
    }
};