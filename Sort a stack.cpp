void des(stack<int> &stack,int x){
    if(stack.size()==0||stack.top()<=x){
        stack.push(x);
        return ;
    }
    int temp=stack.top();
    stack.pop();
    des(stack,x);
    stack.push(temp);
}
void re(stack<int> &stack){
    if(stack.size()==0){
        return ;
    }
    int temp=stack.top();
    stack.pop();
    re(stack);
    des(stack,temp);
}
void sortStack(stack<int> &stack)
{
	re(stack);// Write your code here
}
