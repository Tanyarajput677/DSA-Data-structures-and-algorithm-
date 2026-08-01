class Solution {
public:
    int priority(char ch){
        if(ch=='^'){
            return 3;
        }
        else if(ch=='*'||ch=='/'){
            return 2;
        }
        else if(ch=='+'|| ch=='-'){
            return 1;
        }
        return -1;
    }
    string infixToPostfix(string s){
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(isalnum(ch)){
                ans+=ch;
            }
            else if(ch=='('){
                st.push(ch);
            }
            else if(ch==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty()&& priority(ch)<=priority(st.top())){
                    if(ch=='^' && st.top()=='^'){
                        break;
                    }
                    ans+=st.top();
                    st.pop();
                }
                st.push(ch);

            }

        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
    string infixToPrefix(string s) {
        // Your code goes here
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='('){
                s[i]=')';

            }
            else if(s[i]==')'){
                s[i]='(';
            }
        }
        string postfix=infixToPostfix(s);
        reverse(postfix.begin(),postfix.end());
        return postfix;
    }
};
