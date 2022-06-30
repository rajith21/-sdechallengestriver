class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int ls=maxheap.size();
        int rs=minheap.size();
        if(ls==0){
            maxheap.push(num);
        }else if(ls==rs){
            if(num<=minheap.top()){
                maxheap.push(num);
            }else {
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(num);
            }
        }else {
            if(num>=maxheap.top()){
                minheap.push(num);
            }else {
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(num);
            }
        }
    }
    
    double findMedian() {
        int ls=maxheap.size();
        int rs=minheap.size();
        if(ls==rs){
            return (maxheap.top()+minheap.top())/2.0;
        }else return maxheap.top();
    }
};
