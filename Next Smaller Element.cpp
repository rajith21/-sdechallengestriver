void insert_at_last(stack<int> &stack, int x){
    if(stack.size()==0){
        stack.push(x);
        return ;
    }
    int temp=stack.top();
    stack.pop();
    insert_at_last(stack,x);
    stack.push(temp);
}
void re(stack<int> &stack){
    if(stack.size()==0){
        return ;
    }
    int temp=stack.top();
    stack.pop();
    re(stack);
    insert_at_last(stack,temp);
    
}
void reverseStack(stack<int> &stack) {
    re(stack);
    
}
