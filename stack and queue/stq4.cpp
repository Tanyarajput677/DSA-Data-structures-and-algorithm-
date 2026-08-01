class Solution {
public:
    string postToPre(string postfix) {
        // Your code goes here
        stack<string> st;
        for(int i=0;i<postfix.length();i++){
            char ch=postfix[i];
            if(isalnum(ch)){
                st.push(string(1,ch));
            }
            else{
                string op2=st.top();
                st.pop();
                string op1=st.top();
                st.pop();
                string temp= ch+op1+op2;
                st.push(temp);
            }
        }
        return st.top();
    }
};
