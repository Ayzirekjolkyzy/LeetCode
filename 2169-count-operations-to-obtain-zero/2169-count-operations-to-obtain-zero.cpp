class Solution {
public:
    int countOperations(int num1, int num2) {
        if(num1==0||num2==0) return 0;
        int k=1;
        while(num1!=num2) {
            if(num1>num2) {k++; num1-=num2; }
            else if(num2>num1) { k++; num2-=num1; }
        }
        return k;     
    }
};