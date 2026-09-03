class Solution {
public:
    int value(char ch){
        if (ch == 'I') return 1;
        if (ch == 'V') return 5;
        if (ch == 'X') return 10;
        if (ch == 'L') return 50;
        if (ch == 'C') return 100;
        if (ch == 'D') return 500;
        return 1000; // M
    }
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            int current=value(s[i]);
            int next=value(s[i+1]);
            if(current<next){
                ans-=current;
            }
            else{
                ans+=current;
            }
        }
        ans+=value(s[s.size()-1]);
        return ans;
    }
};
