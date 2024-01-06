class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        priority_queue<int> temp(st.begin(), st.end());
        int a, b;
        while(temp.size()>1) {
            a=temp.top(); temp.pop();
            b=temp.top(); temp.pop();
            if(a!=b) temp.push(a-b);            
        }
        return temp.size()>0? temp.top():0;
    }
};