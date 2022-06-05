#include<stack>
class Queue {
    // Define the data members(if any) here.
    
    public:
    stack<int>sip;
    stack<int>sop;
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
       sip.push(val); // Implement the enqueue() function.
    }

    int deQueue() {
        if(isEmpty()){
            return -1;
        }
        if(sop.size()==0){
            while(sip.size()){
                sop.push(sip.top());
                sip.pop();
            }
            int x=sop.top();
            sop.pop();
            return x;
        }else {
            int x=sop.top();
            sop.pop();
            return x;

        }
            // Implement the dequeue() function.
    }

    int peek() {
         if(isEmpty()){
            return -1;
        }
        if(sop.size()==0){
            while(sip.size()){
                sop.push(sip.top());
                sip.pop();
            }
            int x=sop.top();
           
            return x;
        }else {
            int x=sop.top();
           
            return x;

        }
            // Implement the dequeue() function.

    }

    bool isEmpty() {
        return !(sip.size()+sop.size());// Implement the isEmpty() function here.
    }
};
