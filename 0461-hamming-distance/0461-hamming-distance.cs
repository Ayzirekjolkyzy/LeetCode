public class Solution {
    public int HammingDistance(int x, int y) {
        
        int retr=0;
        int k=x^y;
       while(k!=0) {
           if((k&1)==1) retr++;
          k=k>>1;
       }
       return retr;

        }
}
