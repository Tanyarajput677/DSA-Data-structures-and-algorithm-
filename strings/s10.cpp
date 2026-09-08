class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int k=2;k<=n;k++){
            string ans="";
            int i=0;
            while(i<s.length()){
                int count=0;
                char ch=s[i];
                while(s.length() && s[i]==ch){
                    count++;
                    i++;
                }
                ans+=to_string(count);
                ans+=ch;
            }
            s=ans;

        }
        return s;
    }
};
