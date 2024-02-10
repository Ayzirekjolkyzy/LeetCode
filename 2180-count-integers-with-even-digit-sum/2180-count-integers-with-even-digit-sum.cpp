class Solution {
public:
    int countEven(int num) {
        int temp=0, ret=0;
        for(int j=2; j<=num; j++) {
            int i=j;
            while(i>0) {
                temp+=(i%10);
                i/=10;
            }
            if(temp%2==0) ret++;
            temp=0; }
        return ret;
    }
};