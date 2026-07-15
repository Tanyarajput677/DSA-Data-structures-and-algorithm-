class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long totalsum=(1ll*n*(n+1)/2);
        for(int i=0;i<n;i++){
            sum+=nums[i];
        } 
        return totalsum-sum;
    }
};
