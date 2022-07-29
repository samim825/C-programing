class MyQueue {

    stack<int> input, output;
    queue<char> q;

public:
    MyQueue() {

    }

    void push(int x) {
        input.push(x);
    }

    void pop(void) {
        peek();
        output.pop();
    }

    int peek() {
        if(output.empty()){
            while(input.size()){
                output.push(input.top()),input.pop();
            }
        }

        output.peek();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
