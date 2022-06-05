#include <queue>
class Stack {
	 
   public:
    queue<int>q;
 
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
       return q.size(); // Implement the getSize() function.
    }

    bool isEmpty() {
       if(getSize()){
           return 0;
       } return 1;// Implement the isEmpty() function.
    }

    void push(int element) {
      q.push(element);// Implement the push() function.
    }

    int pop() {
        if(isEmpty()){
            return -1;
        }
         int x=q.size()-1,y;
         while(x){
            y=q.front();
            q.pop();
            q.push(y);
             x--;
        }
        y=q.front();
        q.pop();
        return y;
            
       
    }

    int top() {
        if(isEmpty()){
            return -1;
        }
          return q.back();//
        // Implement the top() function.
    }
};
