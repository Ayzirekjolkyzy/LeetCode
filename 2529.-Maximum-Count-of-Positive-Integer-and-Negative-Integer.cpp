class Solution {
public:
    int maximumCount(vector<int>& nums) {
      int n1=0,n2=0;
        for(auto i: nums) 
         { if(i>0) n1++;
           if(i<0) n2++;}
        return max(n1,n2);
    }
};
