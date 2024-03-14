class MyCircularDeque {
public:
    int k;
    vector<int> ret;
    MyCircularDeque(int k) {
        this->k=k;
    }
    
    bool insertFront(int value) {
        if(ret.size()<k) {
            ret.insert(ret.begin(), value);
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
         if(ret.size()<k) {
            ret.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
         if(ret.size()>0) {
            ret.erase(ret.begin());
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(ret.size()>0) {
            ret.erase(ret.end()-1);
            return true;
        }
        return false;        
    }
    
    int getFront() {
        return ret.size()>0? ret[0]: -1;
    }
    
    int getRear() {
        return ret.size()>0? ret[ret.size()-1]: -1;
    }
    
    bool isEmpty() {
        return ret.size()==0;
    }
    
    bool isFull() {
        return ret.size()==k;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */