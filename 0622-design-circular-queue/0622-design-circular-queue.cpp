class MyCircularQueue {
public:
    vector<int> ret;
    int k;
    MyCircularQueue(int k) {
        this->k=k;
    }
    
    bool enQueue(int value) {
        if(k>ret.size()) {
            ret.push_back(value);
            return true;
            }
        return false;
    }
    
    bool deQueue() {
        if(ret.size()>0) {
            ret.erase(ret.begin());
            return true;
            }
        return false;
    }
    
    int Front() {
        return ret.size()>0? ret[0]:-1;
    }
    
    int Rear() {
        return ret.size()>0? ret[ret.size()-1]:-1;
    }
    
    bool isEmpty() {
        return ret.size()<=0;
    }
    
    bool isFull() {
        return ret.size()==k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */