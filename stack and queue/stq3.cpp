class Solution {
public:
    string postToInfix(string postExp) {
        // Your code goes here
        stack<string> st;
        for(int i=0;i<postExp.length();i++){
            char ch=postExp[i];
            if(isalnum(ch)){
                st.push(string(1,ch));
            }
            else{
                string op2=st.top();
                st.pop();
                string op1=st.top();
                st.pop();
                string temp="(" + op1+ ch + op2 + ")";
                st.push(temp);
            }
            
        }
        return st.top();
    }
};
