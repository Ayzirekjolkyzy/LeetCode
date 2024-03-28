class Solution {
public:
    int wateringPlants(vector<int>& plants, int cap) {
        int k=0, water=cap;
        for(int i=0; i<plants.size(); i++) {
            if(plants[i]>water) { k+=(2*(i+1))-1; water=cap-plants[i]; }
            else  { k++; water-=plants[i]; }
        }
        return k;
    }
};