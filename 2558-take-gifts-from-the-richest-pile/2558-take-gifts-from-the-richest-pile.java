class Solution {
    public long pickGifts(int[] gifts, int k) {
        long ret=0;
        int maxn=0, maxi=0;
        while(k>0) {
            for(int i=0; i<gifts.length; i++) {
                if(maxn<gifts[i]) {
                    maxn=gifts[i]; maxi=i;
                } 
             }
            gifts[maxi]=(int)Math.sqrt(gifts[maxi]); 
            k--;
            maxn=0;
            }
        for(int i=0; i<gifts.length; i++) {
            ret+=gifts[i];
        }
        return ret;
    }
}