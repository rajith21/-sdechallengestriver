// Implement class for minStack.
#include<stack>
class minStack
{
	// Write your code here.
	
	public:
		int mi;
        stack< pair<int,int> > s;
		minStack() 
		{ 
            mi=2000000000;
			
        }
		
		void push(int num)
		{
             if(s.empty()){
                mi =num;
                s.push({num,mi});
                 return ;
            }else {
                 pair<int,int> x=s.top();
                 int y=x.second;
                 mi=min(y,num);
             }
         
            s.push({num,mi});
           
		}
		
		int pop()
		{
            if(s.empty()){
                return -1;
            }
			pair<int,int> x=s.top();
            int y=x.first;
            s.pop();
            return y;// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
            if(s.empty()){
                return -1;
            }
            pair<int,int> x=s.top();
            int y=x.first;// Write your code here.
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
             if(s.empty()){
                return -1;
            }
            pair<int,int> x=s.top();
            int y=x.second;
			// Write your code here.
		}
};
