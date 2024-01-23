class Solution {
public:
    int pivotInteger(int n) {
        int a=0, b=0;
        for(int i=1; i<=n; i++) {
            a+=i; 
        }
        
        for(int i=1; i<=n; i++) {
            a-=i;
            if(a!=b) { b+=i; }
            else return i;
        }
        return -1;
    }
};