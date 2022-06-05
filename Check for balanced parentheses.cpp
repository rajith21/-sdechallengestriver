bool isValidParenthesis(string expression)
{
    stack<char>s;
    for(int i=0;i<expression.size();i++){
        char ch=expression[i];
        if(ch=='('||ch=='{'||ch=='['){
            s.push(expression[i]);
        }else if(expression[i]==')'){
            if(s.empty()||s.top()!='('){
                return false;
            }
            s.pop();
        }else if(expression[i]=='}'){
            if(s.empty()||s.top()!='{'){
                return false;
            }
            s.pop();
        }else if(expression[i]==']'){
            if(s.empty()||s.top()!='['){
                return false;
            }
            s.pop();
        }
        
    }
    if(s.empty()){
        return true;
    }else return false;
    // Write your code here.
}
