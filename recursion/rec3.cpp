class Solution {
public:
    void solve(int n,string curr,vector<string>& ans){
        if(curr.size()==n){
            ans.push_back(curr);
            return;
        }
        solve(n,curr+'0',ans);
        if(curr.empty()|| curr.back()!='1'){
            solve(n,curr+'1',ans);
        }
    }
    vector<string> generateBinaryStrings(int n) {
        // Your code goes here
        vector<string> ans;
        solve(n,"",ans);
        return ans;

    }
};
