class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(st.find(num-1)==st.end()){
                int count=1;
                int x=num;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
