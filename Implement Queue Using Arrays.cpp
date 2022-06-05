class Queue {
public:
    int arr[50001];
    int f=-1;
    int r=-1;
    
    Queue() {
          
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
          if(f==r){
              return 1;
          }
        return 0;
    }

    void enqueue(int data) {
        r++;
        arr[r]=data;
    }

    int dequeue() {
       if(isEmpty()){
           return -1;
       }
       f++;
       return arr[f];
    }

    int front() {
         if(isEmpty()){
           return -1;
       }
        return arr[f+1];
    }
};
