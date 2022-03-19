class FreqStack {
public:
    priority_queue<pair<pair<int,int>,int>> pq;
    map<int,int> m;
    int index=0;
    FreqStack() {
    }
    void push(int val) {
        m[val]++;
        index++;
        pq.push(make_pair(make_pair(m[val],index),val));
    }
    int pop() {
        pair<pair<int,int>,int> p=pq.top();
        pq.pop();
        int k = p.second;
        m[k]--;
        return p.second;
    }
};
//
/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */