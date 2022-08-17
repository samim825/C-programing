class MyQueue {
public:

    stack<int> s;
    stack<int> s1;

    MyQueue() {

    }
    void push(int x) {

        while(!s.empty()){
            int peek = s.top();
            s1.push(peek);
            s.pop();
        }

        s.push(x);

        while(!s1.empty()){
            int val = s1.top();
            s.push(val);
            s1.pop();
        }
    }

    int pop() {
        int curr = s.top();
        s.pop();
        return curr;
    }



    int peek() {

        return s.top();

    }

    bool empty() {
        if(s.empty() && s1.empty()) return true;
        else return false;
    }
};

