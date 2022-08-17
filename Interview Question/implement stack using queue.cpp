
class MyStack {
public:

    queue<int> q;
    queue<int> q1;

    MyStack() {

    }

    void push(int x) {

        while(!q.empty()){
            int val =  q.front();
            q1.push(val);
            q.pop();
        }

        q.push(x);

        while(!q1.empty()){
            int val = q1.front();
            q.push(val);
            q1.pop();
        }

    }

    int pop() {

        int cur = q.front();
        q.pop();
        return cur;

    }

    int top() {

        return q.front();

    }

    bool empty() {

        if(q.empty() && q1.empty()) return true;
        else return false;

    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
